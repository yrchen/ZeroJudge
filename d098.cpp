/**********************************************************************************/  
/*  Problem: d098 "Stringstream運用練習(C++)" from 說明文件出自C++ Reference*/  
/*  Language: C++                                                                 */  
/*  Result: AC (6ms, 780KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-17 20:48:19                                         */  
/**********************************************************************************/  
  
#include<iostream>  
#include<cstring>  
#include<sstream>  
#include<cctype>  
using namespace std;  
  
bool isNum(string in){  
    for(int i=0;i<in.length();++i)  
        if( !isdigit(in[i]) )  
            return  false;  
    return true;  
}  
  
int main(){  
  
    string line;  
    while( getline( cin, line) ){  
        int sum=0;  
        istringstream sin(line);  
        string token;  
        while( sin>>token ){  
            if( isNum(token) )  
                sum += atoi( token.c_str() );  
        }  
        printf("%d\n", sum );  
    }  
    return 0;  
} 