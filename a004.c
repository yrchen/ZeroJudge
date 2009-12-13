/**********************************************************************************/
/*  Problem: a004 "文文的求婚"                                               */
/*  Language: C                                                                   */
/*  Result: AC (2ms, 250KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-10 10:47:26                                         */
/**********************************************************************************/

#include<stdio.h>

int main() {
    int year;
    while (scanf("%d ", &year)==1 ) {
        if ( year%400==0)
            puts("閏年");
        else if (year%100==0)
            puts("平年");
        else if (year%4==0)
            puts("閏年");
        else
            puts("平年");
    }
    return 0;
}
