/**********************************************************************************/  
/*  Problem: d594 "G. 總共需要多少錢" from 2009 NPSC 國中組初賽       */  
/*  Language: C                                                                   */  
/*  Result: AC (4ms, 262KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2010-02-27 20:48:59                                         */  
/**********************************************************************************/  
  
#include<stdio.h>  
  
int main(){  
    int numCase;  
    scanf("%d", &numCase);  
    while(numCase--){  
        int a,b;  
        scanf("%d %d",&a,&b);  
        printf("%d\n", (a+b)*2 );  
    }  
    return 0;  
}
