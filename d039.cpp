/**********************************************************************************/  
/*  Problem: d039 "11044 - Searching for Nessy" from UVa ACM 11044                */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 712KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-12-05 18:24:02                                         */  
/**********************************************************************************/  
  
#include<iostream>  
int main(){  
    int numCase;  
    scanf("%d", &numCase);  
    while(numCase--){  
        int m,n;  
        scanf("%d %d", &m, &n);  
        printf("%d\n", (m/3)*(n/3));  
    }  
    return 0;  
} 