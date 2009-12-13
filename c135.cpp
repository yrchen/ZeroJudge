/**********************************************************************************/  
/*  Problem: c135 "LC-Display" from ACM 706                                       */  
/*  Language: C++                                                                 */  
/*  Result: AC (6ms, 690KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-13 11:02:01                                         */  
/**********************************************************************************/  
#include <iostream>  
  
enum{ MAX_ROW=2*10+3, MAX_COL=(10+2)*9 };  
  
char numPattern[5][32]  
    = { " -     -  -     -  -  -  -  - ",  
        "| |  |  |  || ||  |    || || |",  
        "       -  -  -  -  -     -  - ",  
        "| |  ||    |  |  || |  || |  |",  
        " -     -  -     -  -     -  - "  
     };  
  
char getLCD(int num, int x,int y,int size){  
  
    int maxX = (2*size+3) - 1;  
    int midX = (size+2) -1;  
    int maxY = (size+2) -1;  
  
    int patternX, patternY;  
  
    //set patternX  
    if(x==0)  
        patternX = 0;  
    else if(x>0 && x<midX)  
        patternX = 1;  
    else if(x==midX)  
        patternX = 2;  
    else if(x>midX && x<maxX)  
        patternX = 3;  
    else //x==maxX  
        patternX = 4;  
  
    //set patternY  
    if(y==0)  
        patternY = 0;  
    else if(y==maxY)  
        patternY = 2;  
    else  
        patternY = 1;  
  
    int shift = num*3;  
  
    return numPattern[ patternX ][ shift+patternY ];  
}  
  
int main(){  
  
    char strNumber[32];  
    int size;  
  
    scanf("%d %s",&size, strNumber);  
  
    while(size!=0 || strcmp(strNumber,"0")!=0 ){  
  
        char outputBuffer[MAX_ROW][MAX_COL];  
  
        int width = size+2;  
        int height = 2*size+3;  
  
        int columnIndex=0;  
        int len = strlen(strNumber);  
  
        for(int k=0;k<len;++k){  
  
            for(int i=0; i<height; ++i){  
                for(int j=0; j< width; ++j){  
  
                    outputBuffer[i][j+columnIndex]   
                        = getLCD(strNumber[k]-'0',i,j,size);  
                }  
            }  
            columnIndex += width;  
  
            //fill a Balnk Line  
            if(k!=len-1){  
                for(int i=0;i<height;++i)  
                    outputBuffer[i][columnIndex] = ' ';  
  
                columnIndex += 1;  
            }  
        }  
        //output  
        for(int i=0;i<height;++i)  
            outputBuffer[i][columnIndex] = 0;  
  
        for(int i=0;i<height;++i)  
            printf("%s\n", outputBuffer[i]);  
  
        printf("\n");  
        scanf("%d %s",&size, strNumber);  
    }  
    return 0;  
} 
