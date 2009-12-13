/**********************************************************************************/  
/*  Problem: a034 "二進位制轉換"                                            */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 688KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-10 18:38:21                                         */  
/**********************************************************************************/  
#include<iostream>
int main(){  

	int x;  
	while( scanf("%d",&x)==1 ){  

		if(x==0){puts("0"); continue;}

		unsigned int mask = INT_MIN;  //INT_MIN = 10000...0

		//ignore leading zeros
		while( (x&mask) == 0 )
			mask=mask>>1;

		while(mask!=0){  
			char c = (x&mask) ? '1' : '0' ;  
			putchar(c);  
			mask=mask>>1;  
		}  
		putchar('\n');  
	}  
	return 0;  
}
