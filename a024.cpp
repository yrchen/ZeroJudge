/**********************************************************************************/
/*  Problem: a024 "最大公因數(GCD)"                                          */
/*  Language: C++                                                                 */
/*  Result: AC (4ms, 716KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-10 19:02:28                                         */
/**********************************************************************************/

#include<iostream>
//must be a>b
int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    while ( scanf("%d %d", &a , &b) == 2 )
    {
        if (a < b)
        {
            int tmp = a, a = b, b = tmp;
        }
        printf("%d\n", gcd(a, b));
    }
    return 0;
}