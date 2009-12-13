/**********************************************************************************/  
/*  Problem: a012 "Hashmat的戰役" from ACM 10055                               */  
/*  Language: C                                                                   */  
/*  Result: AC (1ms, 274KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-10 14:35:36                                         */  
/**********************************************************************************/  
  
#include <stdio.h>  
  
long long myabs(long long in){  
    return (in>=0)? in : -in;  
}  
  
int main(){  
  
    long long hashmat, enemy;  
  
    while( scanf("%lld %lld ", &hashmat, &enemy )==2 )  
        printf("%lld\n", myabs( enemy-hashmat ) );  
  
    return 0;  
}