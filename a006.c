/**********************************************************************************/  
/*  Problem: a006 "一元二次方程式"                                         */  
/*  Language: C                                                                   */  
/*  Result: AC (1ms, 288KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-10 11:57:52                                         */  
/**********************************************************************************/  
  
#include<stdio.h>  
#include<math.h>  
  
int main(){  
    double a,b,c;  
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){  
        int judge = b*b-4*a*c;  
        if( judge<0 ){  
            puts("No real root");  
        }else if(judge==0){  
            int solve = (-b+sqrt(judge))/(2*a);  
            printf("Two same roots x=%d\n", solve);  
        }else{  
            int solve1 = (-b+sqrt(judge))/(2*a);  
            int solve2 = (-b-sqrt(judge))/(2*a);  
            printf("Two different roots x1=%d , x2=%d\n", solve1, solve2);  
        }  
    }  
    return 0;  
}