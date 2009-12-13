/**********************************************************************************/  
/*  Problem: d206 "108-Maximum Sum" from ACM 108                                  */  
/*  Language: C++                                                                 */  
/*  Result: AC (684ms, 764KB) on ZeroJudge                                        */  
/*  Author: chchwy at 2009-11-13 10:54:28                                         */  
/**********************************************************************************/  
  
#include<iostream>  
using namespace std;  
  
int subMatrixSum(int sumTable[][100+1], int x1,int y1,int x2,int y2){  
    int sum = sumTable[x2][y2]   
                - sumTable[x1-1][y2]   
                - sumTable[x2][y1-1]   
                + sumTable[x1-1][y1-1];  
    return sum;  
}  
  
int main(){  
  
    int sumTable[100+1][100+1]; //sumTable  
    int dimension; //the dimension of matrix  
  
    //input  
    while(scanf("%d",&dimension)==1){  
  
        for(int i=0;i<=dimension;++i){  
            sumTable[0][i] = 0;  
            sumTable[i][0] = 0;  
        }  
  
        //Build Table  
        for(int i=1;i<=dimension;++i){  
            for(int j=1;j<=dimension;++j){  
                int value;  
                scanf("%d", &value);  
                sumTable[i][j] = sumTable[i-1][j]   
                                   + sumTable[i][j-1]   
                                   - sumTable[i-1][j-1]   
                                   + value;  
            }  
        }  
  
        int max = INT_MIN;  
        //the sub-matrix can be determined by two position  
        //left-top (x1,y1)and right-buttom(x2,y2)  
  
        //detetmine the start position (x1,y1)  
        for(int x1=1;x1<=dimension;++x1){  
            for(int y1=1;y1<=dimension;++y1){  
                //detetmine the end position (x2,y2)  
                for(int x2=x1;x2<=dimension;++x2){  
                    for(int y2=y1;y2<=dimension;++y2){  
                        int sum = subMatrixSum(sumTable,x1,y1,x2,y2);  
                        if(sum>max)  
                            max = sum;  
                    }  
                }  
            }  
        }  
        //output  
        printf("%d\n",max);  
    }  
    return 0;  
}