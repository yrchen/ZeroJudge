/**********************************************************************************/  
/*  Problem: c039 "The 3n + 1 problem" from ACM 100                               */  
/*  Language: C++                                                                 */  
/*  Result: AC (32ms, 720KB) on ZeroJudge                                         */  
/*  Author: chchwy at 2009-11-20 19:12:40                                         */  
/**********************************************************************************/  
  
#include <iostream>  
  
int cycleLength(int num){  
    int length=1;  
    int n = num;  
    while(n!=1){  
        if(n%2) //odd  
            n=3*n+1;  
        else //even  
            n=n/2;  
  
        ++length;  
    }  
    return length;  
}  
  
int main(){  
    int a,b; //two input  
    int tmp;  
    int max=0; // max cycle length  
  
    while(scanf("%d %d",&a,&b)==2){  
  
        int i= (a<b)?a:b;  
        for(;i<=a || i<=b;++i){  
            tmp = cycleLength(i);  
            if (tmp>max) max=tmp;  
        }  
  
        printf("%d %d %d\n",a,b,max);  
        max=0;  
    }  
    return 0;  
}