/**********************************************************************************/  
/*  Problem: b223 "B. 外星人的訊息" from 2008 NPSC 國中組決賽          */  
/*  Language: C++                                                                 */  
/*  Result: AC (2ms, 772KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-12-10 14:21:21                                         */  
/**********************************************************************************/  
  
#include<iostream>  
#include<sstream>  
using namespace std;  
  
int main(){  
    string base;  
    getline(cin,base);  
  
    string cmd;  
    while(getline(cin,cmd)){  
        istringstream sin(cmd);  
        string opcode;  
        sin>>opcode;  
  
        if(opcode=="END")  
            break;  
        else if(opcode=="ADD"){  
            string tail;  
            sin>>tail;  
            base.append(tail);  
        }else if(opcode=="ADH"){  
            string head;  
            sin>>head;  
            base = head + base;  
        }else if(opcode=="ERA"){  
            int a,b;  
            sin>>a>>b;  
            base.erase(a-1,b-a+1); //zero indexed  
        }else if(opcode=="SUB"){  
            int a,b;  
            sin>>a>>b;  
            base = base.substr(a-1,b-a+1);  
        }else if(opcode=="SPA"){  
            int pos;  
            sin>>pos;  
            base.insert(pos-1,"_",1);  
        }  
        cout<<base<<endl;  
    }  
    return 0;  
}