/**********************************************************************************/
/*  Problem: d038 "900 - Brick Wall Patterns" from UVa ACM 900                    */
/*  Language: C++                                                                 */
/*  Result: AC (4ms, 728KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-27 12:38:59                                         */
/**********************************************************************************/

#include<cstdio>

int main()
{
    long long int fib[51];
    fib[0] = fib[1] = 1;
    for (int i = 2; i <= 50; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];
    int in;
    while (scanf("%d", &in) == 1)
    {
        if (in == 0)
            break;
        printf("%lld\n", fib[in]);
    }
    return 0;
}