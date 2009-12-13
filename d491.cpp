/**********************************************************************************/  
/*  Problem: d491 "我也愛偶數 (swap 版)" from 板橋高中                  */  
/*  Language: C++                                                                 */  
/*  Result: AC (3ms, 716KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-23 22:16:49                                         */  
/**********************************************************************************/  
  
#include<iostream>  
#include<algorithm>  
using namespace std;  
int main(){  
	int a,b;  
	while(scanf("%d %d", &a, &b )==2){  
		if(a>b) swap(a,b);  
		if(a%2==1) a++;  
		if(b%2==1) b--;  
  
		printf("%d\n", (a+b)*((b-a)/2+1)/2 );  
	}  
	return 0;  
} 