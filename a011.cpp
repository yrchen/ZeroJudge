/**********************************************************************************/  
/*  Problem: a011 "幼稚園的算數遊戲" from ACM 494                         */  
/*  Language: C++                                                                 */  
/*  Result: AC (6ms, 686KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-10 14:28:41                                         */  
/**********************************************************************************/  
#include <iostream>  
#include <cctype>  
  
int main(){  
  
    int counter = 0;  
    char cur=0, prev=0;  
    while( (cur=getchar())!=EOF ){  
        if(cur=='\n'){  
            printf("%d\n", counter);  
            counter=0;  
            prev=0;  
        }  
        if( isalpha(cur) && !isalpha(prev) )  
            counter++;  
        prev=cur;  
    }  
    return 0;  
} 