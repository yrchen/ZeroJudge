/**********************************************************************************/
/*  Problem: c024 "10079 - Pizza Cutting" from ACM 10079                          */
/*  Language: C++                                                                 */
/*  Result: AC (12ms, 728KB) on ZeroJudge                                         */
/*  Author: chchwy at 2009-11-25 10:44:09                                         */
/**********************************************************************************/

#include<iostream>

int main()
{
    long long int k;
    while ( scanf("%lld", &k) == 1 )
    {
        if (k < 0) break;
        printf("%lld\n", k * (k + 1) / 2 + 1);
    }
}