/**********************************************************************************/
/*  Problem: d058 "BASIC 的 SGN 函數" from 板橋高中                        */
/*  Language: C++                                                                 */
/*  Result: AC (3ms, 718KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-11 21:27:27                                         */
/**********************************************************************************/
#include<iostream>
int main()
{
    int a;
    while (scanf("%d", &a) == 1 )
    {
        ((a > 0 && (a = 1)) || (a < 0 && (a = -1)) || (a == 0 && (a = 0)));
        printf("%d\n", a);
    }
}