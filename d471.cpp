/**********************************************************************************/  
/*  Problem: d471 "0 與 1 的遊戲" from 葆葆                                 */  
/*  Language: C++                                                                 */  
/*  Result: AC (46ms, 720KB) on ZeroJudge                                         */  
/*  Author: chchwy at 2009-11-13 15:12:27                                         */  
/**********************************************************************************/  
  
#include<iostream>  
  
inline int printBinary(int x,int nbit, unsigned int mask){  
	//unsigned int mask = 1;  
	//mask = mask<<(nbit-1);  
	while(mask){  
		printf("%d", (x&mask)?1:0 );  
		mask=mask>>1;  
	}  
	printf("\n");  
}  
  
int main(){  

	int nbit;  
	while( scanf("%d", &nbit)==1 ){  
		int bound=1;  
		bound = bound<<nbit;  
		for(int i=0;i<bound;++i)  
			printBinary(i,nbit, bound>>1);  
	}  
	return 0;  
}