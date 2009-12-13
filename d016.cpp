/**********************************************************************************/  
/*  Problem: d016 "後序運算法"                                               */  
/*  Language: C++                                                                 */  
/*  Result: AC (8ms, 778KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-12 14:09:59                                         */  
/**********************************************************************************/  
  
#include<iostream>  
#include<stack>  
#include<cctype>  
#include<cstring>  
#include<sstream>  
using namespace std;  
  
int postExp(string exp){  
  
    istringstream sin(exp);  
    stack<int> stk;  
  
    string token;  
    while(sin>>token){  
  
        if( isdigit(token[0]) ){  
            //cout<<"push.."<<atoi(token.c_str())<<endl;  
            stk.push( atoi(token.c_str()) );  
        }else{  
            int a = stk.top(); stk.pop();  
            int b = stk.top(); stk.pop();  
            switch(token[0]){  
                case '+':  
                    stk.push(b+a);  
                    break;  
                case '-':  
                    stk.push(b-a);  
                    break;  
                case '*':  
                    stk.push(b*a);  
                    break;  
                case '/':  
                    stk.push(b/a);  
                    break;  
                case '%':  
                    stk.push(b%a);  
                    break;  
            }  
            //cout<<"do "<<a<<token[0]<<b<<"="<<stk.top()<<endl;  
        }  
    }  
    return stk.top();  
}  
  
int main(){  
    //freopen("test.in","r",stdin);  
    string line;  
    while( getline(cin,line) ){  
        printf("%d\n", postExp(line) );  
    }  
}