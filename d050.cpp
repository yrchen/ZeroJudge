/**********************************************************************************/  
/*  Problem: d050 "妳那裡現在幾點了？" from 板橋高中                 */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 718KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-10 21:05:42                                         */  
/**********************************************************************************/  
#include<iostream>  
int main(){  
	int twTime;  
	while(scanf("%d", &twTime)==1)
		printf("%d\n", (twTime-15+24)%24);  
	return 0;  
}