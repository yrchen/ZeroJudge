/**********************************************************************************/  
/*  Problem: d481 "矩陣乘法" from 麗山高中經典50題                     */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 814KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-18 18:36:06                                         */  
/**********************************************************************************/  
  
#include<iostream>  
  
void readMatrix(int m[100][100], int row, int col){  
    for(int i=0;i<row;++i)  
        for(int j=0;j<col;++j)  
            scanf("%d", &m[i][j]);  
}  
  
int main(){  
    int marow,macol,mbrow,mbcol;  
  
    while(scanf("%d %d %d %d", &marow, &macol, &mbrow, &mbcol)==4){  
        if(macol!=mbrow){  
            puts("Error");  
            continue;  
        }  
  
        int ma[100][100], mb[100][100];  
        readMatrix(ma, marow, macol);  
        readMatrix(mb, mbrow, mbcol);  
  
        int mp[100][100];  
        memset(mp,0,sizeof(mp));  
        for(int i=0;i<marow;++i){  
            for(int j=0;j<mbcol;++j){  
                for(int k=0;k<macol;++k){  
                     mp[i][j] += ma[i][k] * mb[k][j];  
                }  
            }  
        }  
        for(int i=0;i<marow;++i){  
            for(int j=0;j<mbcol;++j){  
                printf("%d", mp[i][j]);  
                if(j!=mbcol-1) putchar(' ');  
            }  
            putchar('\n');  
        }  
    }  
    return 0;  
}