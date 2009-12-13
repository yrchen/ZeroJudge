/**********************************************************************************/  
/*  Problem: d226 "10071 - Back to High School Physics" from ACM 10071            */  
/*  Language: C++                                                                 */  
/*  Result: AC (6ms, 718KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-13 10:52:25                                         */  
/**********************************************************************************/  
  
#include <stdio.h>  
  
int main(){  
    int v,t;  
    while( scanf("%d %d", &v, &t)==2 )  
        printf("%d\n", 2*v*t );  
    return 0;  
}