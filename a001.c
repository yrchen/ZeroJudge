/**********************************************************************************/  
/*  Problem: a001 "哈囉" from Brian Kernighan                                   */  
/*  Language: C                                                                   */  
/*  Result: AC (4ms, 222KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-10 10:36:06                                         */  
/**********************************************************************************/  

#include<stdio.h>  

int main(){  
	char buf[2048];  
	while( fgets(buf, sizeof(buf), stdin)!=NULL)
		printf("hello, %s",buf);  
	return 0;   
}


