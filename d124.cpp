/**********************************************************************************/
/*  Problem: d124 "3的倍数" from                                               */
/*  Language: C++                                                                 */
/*  Result: AC (10ms, 684KB) on ZeroJudge                                         */
/*  Author: chchwy at 2009-11-12 11:17:36                                         */
/**********************************************************************************/

#include<iostream>

int main()
{
    char strnum[10020];
    while ( scanf("%s", strnum) == 1 )
    {
        int i = (strnum[0] == '-') ? 1 : 0;
        int len = strlen(strnum);
        int sum = 0;
        for (; i < len; ++i)
        {
            sum += strnum[i] - '0';
        }
        if (sum % 3 == 0)
            puts("yes");
        else
            puts("no");
    }
    return 0;
}