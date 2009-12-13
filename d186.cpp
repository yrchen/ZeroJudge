/**********************************************************************************/  
/*  Problem: d186 "11461 - Square Numbers" from UVa ACM 11461                     */  
/*  Language: C++                                                                 */  
/*  Result: AC (2ms, 714KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-13 16:40:04                                         */  
/**********************************************************************************/  
  
/* 
 * UVa 11461 
 * Author: chchwy 
 * Last Modified: 2009.11.13 
 */  
#include<iostream>  
#include<cmath>  
int main(){  
    int a,b;  
    while(scanf("%d %d",&a ,&b)==2 ){  
		if(!a) break;  
  
		int counter=0;  
		int i=ceil(sqrt(a));  
		while( i*i <= b ){  
			counter++, i++;  
		}  
		printf("%d\n", counter);  
    }  
  
    return 0;  
}