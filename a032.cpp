/**********************************************************************************/
/*  Problem: a032 "階乘運算"                                                  */
/*  Language: C++                                                                 */
/*  Result: AC (2ms, 724KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-10 18:14:47                                         */
/**********************************************************************************/

#include<iostream>

int main()
{
    int num;
    while (scanf("%d", &num) == 1)
    {
        if (num <= 1)
        {
            printf("1\n");
            continue;
        }
        long long fac = 1;
        for (int i = 2; i <= num; ++i)
        {
            fac *= i;
        }
        printf("%lld\n", fac);
    }
    return 0;
}