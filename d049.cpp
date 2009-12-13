/**********************************************************************************/  
/*  Problem: d049 "中華民國萬歲！" from 板橋高中                       */  
/*  Language: C++                                                                 */  
/*  Result: AC (2ms, 710KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-11 13:47:13                                         */  
/**********************************************************************************/  
#include<iostream>  
int main(){  
    int year;  
    while(scanf("%d", &year)==1)  
        printf("%d\n", year-1911); 
	return 0;
}