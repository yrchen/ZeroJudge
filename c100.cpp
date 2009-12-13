/**********************************************************************************/  
/*  Problem: c100 "Unidirectional TSP" from ACM 116                               */  
/*  Language: C++                                                                 */  
/*  Result: AC (2ms, 742KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-13 11:06:42                                         */  
/**********************************************************************************/  
#include<iostream>  
  
enum{ MAX_ROW=15, MAX_COL=100 };  
  
int getInt(){  
    int i=0, sign=1;  
  
    char c = getchar();  
    while(c==' ' || c=='\n' || c=='\r')  
        c=getchar();  
  
    if(c=='-'){  
        sign=-1;  
        c=getchar();  
    }  
    while(c>'0'-1 && c<'9'+1){  
        i = i*10 + (c-'0');  
        c = getchar();  
    }  
    return  i*sign;  
}  
  
void readMap(int map[][MAX_COL], int row, int col){  
  
    for(int i=0;i<row;++i)  
        for(int j=0;j<col;++j)  
            map[i][j] = getInt();  
}  
  
int main(){  
  
    int row, col;  
    int map[MAX_ROW][MAX_COL];  
  
    while(scanf("%d %d ", &row, &col)==2){  
  
        readMap(map, row, col);  
  
        int path[MAX_ROW][MAX_COL]; //record the min path weight  
        int next[MAX_ROW][MAX_COL]; //record the next path  
  
        for(int i=0;i<MAX_ROW;++i){  
            path[i][col-1] = map[i][col-1];  
            next[i][col-1] = -1;  
        }  
  
        //DP shortest path  
        for(int j=col-2;j>-1;--j){  
            for(int i=0;i<row;++i){  
  
                int a=(i+row-1)%row;  
                int b=i;  
                int c=(i+1)%row;  
  
                int min = a;  
                if( path[b][j+1] < path[min][j+1])  
                    min = b;  
                else if(path[b][j+1]==path[min][j+1] && b<min)  
                    min = b;  
  
                if( path[c][j+1] < path[min][j+1])  
                    min = c;  
                else if(path[c][j+1] == path[min][j+1] && c<min)  
                    min = c;  
  
                path[i][j] = map[i][j] + path[min][j+1];  
                next[i][j] = min;  
            }  
        }  
  
        //terminal place  
        int min=0;  
        for(int i=1;i<row;++i)  
            if(path[i][0] < path[min][0])  
                min = i;  
  
        int minCost = path[min][0];  
  
        for(int i=0;i<col-1;++i){  
            printf("%d ",min+1);  
            min = next[min][i];  
        }  
        printf("%d",min+1);  
        printf("\n%d\n", minCost);  
    }  
    return 0;  
}
