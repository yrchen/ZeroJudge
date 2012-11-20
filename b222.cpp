/**********************************************************************************/  
/*  Problem: b222 "A. 犯人的編號" from 2008 NPSC 國中組決賽                       */  
/*  Language: C++                                                                 */  
/*  Result: AC (2ms, 794KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-12-10 13:53:53                                         */  
/**********************************************************************************/  
  
#include<iostream>  
using namespace std;  
  
int main(){  
    string ans;  
    getline(cin,ans);  
  
    int numCase;  
    scanf("%d ", &numCase);  
    while( numCase-- ){  
        string guess;  
        getline(cin,guess);  
  
        int a=0,b=0;  
        for(int i=0;i<4;++i){  
            if( guess[i]==ans[i] )  
                a++;  
            else if( ans.find(guess[i])!=string::npos )  
                b++;  
        }  
        printf("%dA%dB\n",a,b);  
    }  
    return 0;  
}  