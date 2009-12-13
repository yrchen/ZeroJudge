/**********************************************************************************/  
/*  Problem: d256 "11388 - GCD LCM" from ACM 11388                                */  
/*  Language: C++                                                                 */  
/*  Result: AC (6ms, 724KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-13 16:21:40                                         */  
/**********************************************************************************/  
  
#include<iostream>  
#include<cmath>  
  
int main(){  
    int numCase;  
    scanf("%d",&numCase);  
  
    while(numCase--){  
        int gcd, lcm;  
        scanf("%d %d", &gcd, &lcm);  
  
        if(lcm%gcd!=0)  
            puts("-1");  
        else  
            printf("%d %d\n", gcd, lcm);  
    }  
    return 0;  
}