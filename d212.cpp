/**********************************************************************************/  
/*  Problem: d212 "ªFªFª¦¶¥±è" from                                          */  
/*  Language: C++                                                                 */  
/*  Result: AC (0ms, 718KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-17 20:36:21                                         */  
/**********************************************************************************/  
  
#include<iostream>  
using namespace std;  
  
int main(){  
  
    int num;  
    long long fib[101];  
    fib[0] = fib[1] = 1;  
  
    for(int i=2;i<=100;++i)  
        fib[i] = fib[i-1] + fib[i-2];  
  
    while ( scanf("%d", &num)==1 ){  
        printf("%lld\n", fib[num]);  
    }  
}