/**********************************************************************************/  
/*  Problem: d392 "讀取練習——強大的加法！" from liouzhou_101        */  
/*  Language: C++                                                                 */  
/*  Result: AC (50ms, 798KB) on ZeroJudge                                         */  
/*  Author: chchwy at 2009-11-12 17:14:56                                         */  
/**********************************************************************************/  
  
#include <iostream>  
#include <sstream>  
using namespace std;  
  
int sum(string line){  
    istringstream sin(line);  
    int token=0, sum=0;  
    while(sin>>token)  
        sum+=token;  
    return sum;  
}  
  
int main ()  
{  
    string line;  
    while( getline(cin,line) ){  
        printf("%d\n", sum(line) );  
    }  
    return 0;  
}