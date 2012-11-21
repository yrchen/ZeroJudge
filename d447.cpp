/**********************************************************************************/  
/*  Problem: d447 "很大的質數判斷" from 愷愷                             */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 808KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-20 10:19:04                                         */  
/**********************************************************************************/  
  
#include<iostream>  
#include<cmath>  
#include<vector>  
using namespace std;  
  
enum{MAX=46342}; //sqrt(INT_MAX)  
char np[MAX];  
  
int shieve(char* np, int limit){  
    int sqrtBound = sqrt(limit);  
    for(int i=2;i<sqrtBound;++i){  
        if(np[i]) continue;  
        for(int k=i*2;k<limit;k+=i)  
            np[k]=1;  
    }  
}  
  
bool isPrime(int num, vector<int> prime){  
    int bound = sqrt(num);  
    for(int i=0;i<prime.size();++i){  
        if( prime[i]>bound)  
            break;  
        if( num%prime[i] ==0 )  
            return false;  
    }  
    return true;  
}  
  
int main(){  
    shieve(np,MAX);  
  
    vector<int> prime;  
    for(int i=2;i<MAX;++i){  
        if(!np[i])  
            prime.push_back(i);  
    }  
  
    int num;  
    while(scanf("%d",&num)==1){  
        if( isPrime(num,prime) )  
            puts("yes");  
        else  
            puts("no");  
    }  
    return 0;  
} 