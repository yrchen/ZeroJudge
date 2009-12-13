/**********************************************************************************/  
/*  Problem: d376 "良心何在" from 小光                                      */  
/*  Language: C++                                                                 */  
/*  Result: AC (10ms, 1868KB) on ZeroJudge                                        */  
/*  Author: chchwy at 2009-11-12 14:34:55                                         */  
/**********************************************************************************/  
  
#include<iostream>  
  
int add(int deep){  
	if(deep==0)  
		return 0;  
	int n;  
	scanf("%d", &n);  
	return n+add(deep-1);  
}  
  
int main(){  
	int deep;  
	scanf("%d", &deep);  
	printf("%d\n", add(deep));  
}  