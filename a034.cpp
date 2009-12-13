/**********************************************************************************/  
/*  Problem: a034 "二進位制轉換"                                            */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 688KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-10 18:38:21                                         */  
/**********************************************************************************/  
  
#include<iostream>  
int main(){  
  
    int x=0;  
  
    while( scanf("%d",&x)==1 ){  
        int flag=false;  
        unsigned int y = INT_MIN;  
  
        while(y!=0){  
            char output = (x&y)?('1'):('0');  
            if(!flag && output=='1')  
                flag=true;  
            if(flag)  
                 putchar(output);  
            y=y>>1;  
        }  
        putchar('\n');  
    }  
    return 0;  
}