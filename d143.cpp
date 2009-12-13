/**********************************************************************************/  
/*  Problem: d143 "Q11172: Relational Operators" from ACM 11172                   */  
/*  Language: C++                                                                 */  
/*  Result: AC (2ms, 686KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-26 02:10:51                                         */  
/**********************************************************************************/  
  
#include<cstdio>  
  
int main(){  
  int a,b;  
  int numCase;  
  scanf("%d", &numCase);  
  while(numCase--){  
    scanf("%d %d", &a, &b);  
    if(a<b) puts("<");  
    else if(a>b) puts(">");  
    else puts("=");  
  }  
  return 0;  
}  