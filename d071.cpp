/**********************************************************************************/
/*  Problem: d071 "文文的求婚--續集 (EOF 版)" from 板橋高中           */
/*  Language: C                                                                   */
/*  Result: AC (0ms, 246KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-10 14:56:18                                         */
/**********************************************************************************/

#include<stdio.h>

int main()
{
    int year;
    while (scanf("%d ", &year) == 1 )
    {
        if ( year % 400 == 0)
            puts("a leap year");
        else if (year % 100 == 0)
            puts("a normal year");
        else if (year % 4 == 0)
            puts("a leap year");
        else
            puts("a normal year");
    }
    return 0;
}