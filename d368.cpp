/**********************************************************************************/  
/*  Problem: d368 "Q10196 Check the Check" from ACM 10196                         */  
/*  Language: C++                                                                 */  
/*  Result: AC (4ms, 688KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-13 10:47:15                                         */  
/**********************************************************************************/  
#include<iostream>  
  
enum{ BLACK=0, WHITE=1, NONE };  
  
/* return 1=empty board, 0=not empty */  
int emptyBoard (char board[][12]){  
  
    for(int i=2;i<8+2;++i)  
        for(int j=2;j<8+2;++j)  
            if( board[i][j]!='.') //not empty  
                return 0;  
    return 1;  
}  
  
int readBoard (char board[][12]){  
    //read data  
    for(int i=2;i<=2+8;++i) //8行棋盤+1行空行  
        fgets(board[i]+2,20,stdin);  
  
    return emptyBoard(board);  
}  
//WHITE=upper case BLACK=lowercase  
int check(char board[][12], int king[2], int color){  
  
    //check Knight  
    int knight = (color)?'n':'N'; //ex. BlackKing(color=0) <=> White Knight='N'  
  
    if( board[king[0]+1][king[1]+2]==knight ||  
        board[king[0]+1][king[1]-2]==knight ||  
        board[king[0]+2][king[1]+1]==knight ||  
        board[king[0]+2][king[1]-1]==knight ||  
        board[king[0]-1][king[1]+2]==knight ||  
        board[king[0]-1][king[1]-2]==knight ||  
        board[king[0]-2][king[1]+1]==knight ||  
        board[king[0]-2][king[1]-1]==knight  
    ){  
        return color;  
    }  
  
    /* check the diagonal */  
    int queen  = (color)?'q':'Q';  
    int bishop = (color)?'b':'B';  
  
    int x=king[0]+1 ,y=king[1]+1;  
    while(board[x][y]=='.')  x+=1, y+=1;  
    if(board[x][y]==queen || board[x][y]==bishop)  
        return color;  
  
    x=king[0]-1 ,y=king[1]+1;  
    while(board[x][y]=='.')  x-=1, y+=1;  
    if(board[x][y]==queen || board[x][y]==bishop)  
        return color;  
  
    x=king[0]+1 ,y=king[1]-1;  
    while(board[x][y]=='.')  x+=1, y-=1;  
    if(board[x][y]==queen || board[x][y]==bishop)  
        return color;  
  
    x=king[0]-1 ,y=king[1]-1;  
    while(board[x][y]=='.')  x-=1, y-=1;  
    if(board[x][y]==queen || board[x][y]==bishop)  
        return color;  
  
    /* check the straight */  
    int rook = (color)?'r':'R';  
  
    x=king[0] ,y=king[1]+1;  
    while(board[x][y]=='.')  y+=1;  
    if(board[x][y]==queen || board[x][y]==rook)  
        return color;  
  
    x=king[0] ,y=king[1]-1;  
    while(board[x][y]=='.')  y-=1;  
    if(board[x][y]==queen || board[x][y]==rook)  
        return color;  
  
    x=king[0]+1 ,y=king[1];  
    while(board[x][y]=='.')  x+=1;  
    if(board[x][y]==queen || board[x][y]==rook)  
        return color;  
  
    x=king[0]-1 ,y=king[1];  
    while(board[x][y]=='.')  x-=1;  
    if(board[x][y]==queen || board[x][y]==rook)  
        return color;  
  
    /* check the Pawn */  
    if(color==BLACK){  
        if( board[ king[0]+1 ][ king[1]-1 ]=='P' ||  
            board[ king[0]+1 ][ king[1]+1 ]=='P')  
            return color;  
        return NONE;  
    }else{ //color=White  
        if( board[ king[0]-1 ][ king[1]+1 ]=='p' ||  
            board[ king[0]-1 ][ king[1]-1 ]=='p')  
            return color;  
        return NONE;  
    }  
}  
  
int checkTheCheck(char board[][12]){  
  
    int king[2][2];  
  
    //find the position of kings  
    for(int i=2;i<8+2;++i){  
        for(int j=2;j<8+2;++j){  
            if(board[i][j]=='k')  
                king[BLACK][0]=i, king[BLACK][1]=j;  
            else if(board[i][j]=='K')  
                king[WHITE][0]=i, king[WHITE][1]=j;  
        }  
    }  
    //BLACK=0, WHITE=1  
    int result;  
    for(int color=BLACK;color<=WHITE;++color)  
        if( NONE != (result=check(board, king[color], color)) )  
            return result;  
  
    return NONE;  
}  
  
int main(){  
  
    char board[8+4][8+4];  
    memset(board,0,sizeof(board));  
    int counter=1;  
    int isEmpty = readBoard(board);  
  
    while(!isEmpty){ //for each case  
  
        int check = checkTheCheck(board);  
        if(check==BLACK)  
            printf("Game #%d: black king is in check.\n",counter);  
        else if(check==WHITE)  
            printf("Game #%d: white king is in check.\n",counter);  
        else if(check==NONE)  
            printf("Game #%d: no king is in check.\n",counter);  
        ++counter;  
  
        isEmpty = readBoard(board);  
    }  
}