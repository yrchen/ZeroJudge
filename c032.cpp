/**********************************************************************************/
/*  Problem: c032 "Perfection" from ACM 382                                       */
/*  Language: C++                                                                 */
/*  Result: AC (6ms, 726KB) on ZeroJudge                                          */
/*  Author: chchwy at 2010-01-31 01:23:01                                         */
/**********************************************************************************/
#include<iostream>
#include<cmath>

int factorSum(int n)
{
    if (n == 1) return 0;
    int sum = 1; //1必為因數
    int sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; ++i)
    {
        if ( n % i == 0 )
        {
            sum += i; //因數一定成對出現
            sum += n / i;
        }
    }
    return sum;
}

int main()
{
    puts("PERFECTION OUTPUT");
    int n;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0) break;
        int sum =  factorSum(n);
        if (sum == n)
            printf("%5d  PERFECT\n", n);
        else if (sum < n)
            printf("%5d  DEFICIENT\n", n);
        else
            printf("%5d  ABUNDANT\n", n);
    }
    puts("END OF OUTPUT");
    return 0;
}

