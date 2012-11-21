/**********************************************************************************/  
/*  Problem: c073 "The Blocks Problem" from ACM 101                               */  
/*  Language: C++                                                                 */  
/*  Result: AC (2ms, 772KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-13 11:04:07                                         */  
/**********************************************************************************/  
#include <iostream>  
#include <vector>  
#include <algorithm>  
using namespace std;  
  
//blockWorld: to control blocks  
class Blocks{  
private:  
    int size;  
    vector<int> stk[25];//方塊堆  
    int pos[25]; //紀錄每個block目前在哪個stack裡  
public:  
    Blocks(int);  
    void treatSource(int,char*);  
    void treatTarget(int,char*);  
    void clearAbove(int);  
    void move(int,int);  
    bool inTheSameStack(int,int);  
    void print();  
};  
  
Blocks::Blocks(int n){  
    size=n;  
    for(int i=0;i<size;++i){  
        stk[i].push_back(i);  
        pos[i]=i;  
    }  
}  
  
void Blocks::treatSource(int a, char* cmd){  
  
    // pile a: do nothing.  
    if( strcmp(cmd,"pile")==0 )  
        return;  
    // move a: 把a上面的都搬回原處  
    clearAbove(a);  
}  
  
void Blocks::treatTarget(int b, char* cmd){  
  
    // over b: do nothing about b.  
    if( strcmp(cmd,"over")==0 )  
        return;  
    // onto b: 把b上面的都搬回原處  
    clearAbove(b);  
}  
  
// Clear all the blocks above a to their original position.  
void Blocks::clearAbove(int a){  
  
    int cur = pos[a];  
    while(stk[cur].back()!=a){  
  
        int num=stk[cur].back();  
        stk[num].push_back(num);  
        pos[num] = num;  
  
        stk[cur].pop_back();  
    }  
}  
  
bool Blocks::inTheSameStack(int x,int y){  
    return (pos[x]==pos[y]);  
}  
  
void Blocks::move(int a,int b){  
    int posa = pos[a], posb = pos[b];  
  
    vector<int>::iterator aIt =  
        find( stk[posa].begin(), stk[posa].end(), a);  
    //move  
    stk[posb].insert( stk[posb].end(), aIt, stk[posa].end() );  
  
    //modify pos  
    vector<int>::iterator it;  
    for(it=aIt; it!=stk[posa].end(); ++it)  
        pos[*it] = posb;  
    //clear blocks  
    stk[posa].erase( aIt, stk[posa].end() );  
  
}  
  
void Blocks::print(){  
    for(int i=0;i<size;++i){  
        printf("%d:",i);  
  
        vector<int>::iterator it;  
        for(it=stk[i].begin();it!=stk[i].end();++it)  
            printf(" %d", (*it) );  
        printf("\n");  
    }  
}  
  
int main()  
{  
    int numBlocks;  
    scanf("%d", &numBlocks);  
    Blocks blk(numBlocks);  
  
    char cmd1[10], cmd2[10];  
    int a,b;  
  
    // [move/pile] a [onto/over] b  
    while( scanf("%s %d %s %d", cmd1, &a, cmd2, &b)==4){  
  
        // Ignore illegal command  
        if(a==b) continue;  
        if( blk.inTheSameStack(a,b) ) continue;  
  
        blk.treatSource(a,cmd1);  
        blk.treatTarget(b,cmd2);  
  
        blk.move(a,b);  
    }  
    blk.print();  
    return 0;  
}