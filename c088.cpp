/**********************************************************************************/  
/*  Problem: c088 "Prime Land" from ACM 516                                       */  
/*  Language: C++                                                                 */  
/*  Result: AC (160ms, 908KB) on ZeroJudge                                        */  
/*  Author: chchwy at 2009-11-22 14:10:17                                         */  
/**********************************************************************************/  
#include<iostream>  
#include<sstream>  
#include<cstring>  
using namespace std;  
  
int main(){  
  
    string line;  
  
    while(getline(cin,line)){  
  
        if(line.size()<2) break;  
  
        int num=1;  
  
        istringstream sin(line);  
        int base, exp;  
        while(sin>>base>>exp){  
            for(int i=0;i<exp;++i)  
                num  = num*base;  
        }  
  
        int num2 = num-1;  
  
        int factor[32768];  
        memset(factor,0,sizeof(factor));  
  
        for(int i=2;i<=num2;++i){  
            while(num2%i==0){  
                num2 = num2/i;  
                ++factor[i];  
            }  
        }  
  
        //output  
        for(int i=num;i>1;--i){  
            if(factor[i]>0)  
                printf("%d %d ", i, factor[i]);  
        }  
        puts("");  
    }  
    return 0;  
}