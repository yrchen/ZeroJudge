/**********************************************************************************/
/*  Problem: a040 "阿姆斯壯數"                                               */
/*  Language: C++                                                                 */
/*  Result: AC (50ms, 740KB) on ZeroJudge                                         */
/*  Author: chchwy at 2009-11-10 19:51:28                                         */
/**********************************************************************************/

#include<iostream>
#include<cmath>

int mypow(int base, int exp)
{
    if (base == 0) return 0;
    if (exp == 0) return 1;
    int prod = 1;
    for (int i = 0; i < exp; ++i)
        prod *= base;
    return prod;
}
bool isArmstrong(int num)
{
    char str[64];
    sprintf(str, "%d", num);
    int len = strlen(str);
    int sum = 0;
    for (int i = 0; i < len; ++i)
        sum += mypow( (str[i] - '0'), len );
    return (sum == num);
}
int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) == 2)
    {
        int index = 0, arm[5000];
        for (int i = n; i <= m; ++i)
            if ( isArmstrong(i) )
                arm[index++] = i;
        if (index == 0)
        {
            puts("none");
            continue;
        }
        for (int i = 0; i < index; ++i)
        {
            printf("%d", arm[i]);
            if (i != index - 1) putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}