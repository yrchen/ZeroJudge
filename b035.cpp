/**********************************************************************************/  
/*  Problem: b035 "D. 海加爾山之戰" from 2006 NPSC 國中組決賽          */  
/*  Language: C++                                                                 */  
/*  Result: AC (62ms, 714KB) on ZeroJudge                                         */  
/*  Author: chchwy at 2009-12-05 18:12:00                                         */  
/**********************************************************************************/  
  
#include<iostream>  
  
int main(){  
    int numCastle;  
    while( scanf("%d", &numCastle)==1){  
        if(numCastle==0) break;  
        int total=0;  
        for(int i=0;i<numCastle;++i){  
            int edge;  
            scanf("%d", &edge);  
            total += edge*edge;  
        }  
        printf("%d\n",total);  
    }  
    return 0;  
}