/**********************************************************************************/
/*  Problem: b202 "A. 優惠方案" from 2008 NPSC 國中組初賽                */
/*  Language: C                                                                   */
/*  Result: AC (2ms, 232KB) on ZeroJudge                                          */
/*  Author: chchwy at 2010-02-27 20:56:39                                         */
/**********************************************************************************/

#include<stdio.h>

int main(){
    int numCase;
    scanf("%d", &numCase);
    while(numCase--){
        int a,b,c;
        scanf("%d%d%d", &a,&b,&c);
        if( a!=b & b!=c & c!=a )
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
