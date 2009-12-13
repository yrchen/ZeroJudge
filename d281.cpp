/**********************************************************************************/  
/*  Problem: d281 "10499 - The Land of Justice" from ACM 10499                    */  
/*  Language: C++                                                                 */  
/*  Result: AC (10ms, 716KB) on ZeroJudge                                         */  
/*  Author: chchwy at 2009-12-07 07:43:15                                         */  
/**********************************************************************************/  
  
#include<iostream>  
  
int main(){  
  
    long long int n;  
    while(scanf("%lld", &n)==1){  
        if(n<0) break;  
        if(n==1) printf("0%%\n");  
        else  
            printf("%lld%%\n", n*25);  
    }  
    return 0;  
}  