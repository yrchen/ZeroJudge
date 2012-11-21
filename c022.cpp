/**********************************************************************************/
/*  Problem: c022 "10783 - Odd Sum" from ACM 10783                                */
/*  Language: C++                                                                 */
/*  Result: AC (4ms, 716KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-27 00:58:59                                         */
/**********************************************************************************/

#include<iostream>

int main()
{
    int numCase;
    scanf("%d", &numCase);
    for (int i = 1; i <= numCase; ++i)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a % 2 == 0)a++;
        if (b % 2 == 0)b--;
        printf("Case %d: %d\n", i, (a + b) * (b - a + 2) / 4 );
    }
    return 0;
}