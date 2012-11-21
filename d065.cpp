/**********************************************************************************/
/*  Problem: d065 "三人行必有我師" from 板橋高中                       */
/*  Language: C++                                                                 */
/*  Result: AC (3ms, 716KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-11 20:50:16                                         */
/**********************************************************************************/
#include<iostream>
int main()
{
    int a[3];
    while ( scanf("%d %d %d", a, a + 1, a + 2 ) == 3)
    {
        int max = a[0];
        for (int i = 1; i < 3; ++i)
            if (a[i] > max) max = a[i];
        printf("%d\n", max);
    }
}