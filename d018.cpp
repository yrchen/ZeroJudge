/**********************************************************************************/  
/*  Problem: d018 "字串讀取練習"                                            */  
/*  Language: C++                                                                 */  
/*  Result: AC (2ms, 874KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-11 13:43:20                                         */  
/**********************************************************************************/  
#include<iostream>  
#include<sstream>  
using namespace std;  
  
int main(){  
    //freopen("test.in","r",stdin);  
    char buf[4096];  
    while(fgets(buf,sizeof(buf),stdin)){  
        stringstream s;  
        s<<buf;  
  
        int i;  
        double value;  
        char c;  
  
        double sum=0;  
        while(s>>i>>c>>value){  
            if(i%2) sum+=value; //odd  
            else sum-=value; //even  
        }  
        cout<<sum<<endl;  
    }  
}