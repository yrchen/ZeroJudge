/**********************************************************************************/
/*  Problem: d485 "我愛偶數" from 板橋高中                                */
/*  Language: C++                                                                 */
/*  Result: AC (5ms, 719KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-11 14:20:57                                         */
/**********************************************************************************/

#include<iostream>
#include<cmath>
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b ) == 2 )
    {
        int total = (b - a + 1) / 2;
        if (a % 2 == 0 && b % 2 == 0) total++;
        printf("%d\n", abs(total) );
    }
    return 0;
}