/**********************************************************************************/  
/*  Problem: d121 "583 - Prime Factors" from UVa ACM 583                          */  
/*  Language: C++                                                                 */  
/*  Result: AC (16ms, 864KB) on ZeroJudge                                         */  
/*  Author: chchwy at 2009-11-22 21:38:26                                         */  
/**********************************************************************************/  
#include<iostream>  
#include<map>  
#include<vector>  
#include<cstdlib>  
  
using namespace std;  
  
enum{MAX=46340+1};  
char p[MAX];  
  
void shieve(vector<int> & prime){  
    for(int i=2;i*i<MAX;++i){  
        if( p[i]==1 ) continue;  
        for(int j=i*i;j<MAX;j+=i)  
            p[j]=1;  
    }  
  
    for(int i=2;i<MAX;++i)  
        if(p[i]==0)  
            prime.push_back(i);  
}  
  
int main() {  
    vector<int> prime;  
    shieve(prime);  
  
    int num;  
    while (scanf("%d",&num)==1) {  
        if(num==0) break;  
  
        printf("%d =", num);  
  
        //special case  
        if(num==1 || num==-1){  
            printf(" %d\n", num);  
            continue;  
        }  
  
        if(num<0){  
            num = -num;  
            printf(" -1 x");  
        }  
  
        map<int,int> factors;  
  
        int bound = num;  
        vector<int>::iterator pit;  
        for(pit=prime.begin();pit!=prime.end();++pit){  
            int i = (*pit);  
  
            if( i*i > bound ) break;  
  
            while(num%i==0){  
                ++factors[i];  
                num = num/i;  
            }  
            if(num==1) break;  
        }  
  
        if(num!=1)  
            factors[num]++;  
  
        map<int,int>::iterator it = factors.begin();  
        printf(" %d", (*it).first);  
        (*it).second--;  
  
        for(it=factors.begin(); it!=factors.end();it++){  
            while( (*it).second ){  
                printf(" x %d", (*it).first);  
                (*it).second--;  
            }  
        }  
        puts("");  
    }  
    return 0;  
}