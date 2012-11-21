/**********************************************************************************/  
/*  Problem: d532 "文文的求婚 (三)" from 板橋高中教學題              */  
/*  Language: C++                                                                 */  
/*  Result: AC (2ms, 716KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-17 20:57:42                                         */  
/**********************************************************************************/  
  
#include<iostream>  
  
bool isLeap(int year){  
	if(year%400==0)  
		return true;  
	if(year%100==0)  
		return false;  
	if(year%4==0)  
		return true;  
}  
int main(){  
	int start,end;  
	while(scanf("%d %d",&start,&end)==2){  
		int counter=0;  
		for(int i=start;i<=end;i++){  
			if( isLeap(i) )  
				counter++;  
		}  
		printf("%d\n",counter);  
	}  
} 