/**********************************************************************************/  
/*  Problem: d190 "11462 - Age Sort" from UVa ACM 11462                           */  
/*  Language: C++                                                                 */  
/*  Result: AC (1480ms, 28148KB) on ZeroJudge                                     */  
/*  Author: chchwy at 2009-11-22 14:54:34                                         */  
/**********************************************************************************/  
#include<iostream>  
#include<sstream>  
using namespace std;  
  
int p[2000000];  
  
int main() {  
  
    string line;  
    while (getline(cin,line)) {  
        int numPeople = atoi( line.c_str() );  
        if (numPeople==0) break;  
  
        getline(cin,line);  
        istringstream sin(line);  
  
        int i=0;  
        while (sin>>p[i++]);  
  
        sort(p, p+numPeople);  
  
        for (int i=0;i<numPeople;++i)  
            printf("%d ", p[i]);  
        printf("\n");  
    }  
    return 0;  
}