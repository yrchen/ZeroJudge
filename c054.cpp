/**********************************************************************************/
/*  Problem: c054 "WERTYU" from ACM 10082                                         */
/*  Language: C++                                                                 */
/*  Result: AC (4ms, 642KB) on ZeroJudge                                          */
/*  Author: chchwy at 2010-04-20 17:44:00                                         */
/**********************************************************************************/
#include<cstdio>

int main(){

    char key[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    //build map
    char map[256];
    for(int i=0; key[i]!=NULL; ++i)
        map[ key[i] ] = key[i-1];
    map[' '] = ' ';
    map['\n'] = '\n';

    int c;
    while((c=getchar())!=EOF)
        putchar(map[c]);
    return 0;
}

