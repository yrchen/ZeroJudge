/**********************************************************************************/  
/*  Problem: c098 "Fermat vs. Pythagoras" from ACM 106                            */  
/*  Language: C++                                                                 */  
/*  Result: AC (92ms, 2662KB) on ZeroJudge                                        */  
/*  Author: chchwy at 2009-11-13 11:07:09                                         */  
/**********************************************************************************/  
  
#include<iostream>  
#include<cmath>  
  
short int p[1000001];  
  
int gcd(int m, int n){  
    int k;  
    while(k=m%n){  
        m=n;  
        n=k;  
    }  
    return n;  
}  
  
int main(){  
    int max;  
    int numTuple;  
  
    while(scanf("%d", &max)==1){  
  
        numTuple=0; //number of tuple(a,b,c)  
        memset(p,0,sizeof(p));  
  
        int a,b,c; //tuple(a,b,c)  
        for(int x=1;x<708;++x){  
            for(int y=x+1;;y+=2){  
                if(gcd(x,y)!=1) continue;  
  
                a = y*y-x*x;  
                b = 2*x*y;  
                c = y*y+x*x;  
                if(c>max) break;  
  
                numTuple++;  
  
                int ma=a, mb=b, mc=c;  
                while( mc<=max ){  
                    p[ma]=p[mb]=p[mc]=1;  
                    ma+=a;  
                    mb+=b;  
                    mc+=c;  
                }  
            }  
        }  
        int numNotInTuple=max;  
        for(int i=0;i<=max;++i)  
            numNotInTuple-=p[i];  
  
        printf("%d %d\n", numTuple, numNotInTuple);  
    }  
    return 0;  
}