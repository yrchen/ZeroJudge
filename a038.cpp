/**********************************************************************************/  
/*  Problem: a038 "數字翻轉"                                                  */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 722KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-10 19:09:08                                         */  
/**********************************************************************************/  
  
#include<iostream>  

int main(){  
  
    int a;    
    while( scanf("%d", &a)==1 ){  
  
        char str[64], str2[64];  
        sprintf(str,"%d",a);  
        int len=strlen(str);  
        for(int i=len-1, j=0;i>-1;--i){  
            str2[j++] = str[i];  
        }  
        str2[len]=0;  
        printf("%d\n", atoi(str2));  
    }  
    return 0;  
}