/**********************************************************************************/  
/*  Problem: d070 "文文的求婚--續集 (0 尾版)" from 板橋高中          */  
/*  Language: C                                                                   */  
/*  Result: AC (4ms, 244KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-10 14:54:54                                         */  
/**********************************************************************************/  
  
#include<stdio.h>      
      
int main(){      
	int year;      
	while(scanf("%d ", &year)==1 ){      
		if(year==0) break;  
		if( year%400==0)      
			puts("a leap year");      
		else if(year%100==0)      
			puts("a normal year");      
		else if(year%4==0)      
			puts("a leap year");      
		else       
			puts("a normal year");      
	}      
	return 0;      
}