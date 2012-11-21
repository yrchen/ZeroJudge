/**********************************************************************************/
/*  Problem: a010 "因數分解"                                                  */
/*  Language: C++                                                                 */
/*  Result: AC (152ms, 4624KB) on ZeroJudge                                       */
/*  Author: chchwy at 2009-11-10 14:26:17                                         */
/**********************************************************************************/

#include<iostream>

int count[1000000];

int main()
{
    int input;
    while ( scanf("%d", &input) == 1 )
    {
        memset(count, 0, sizeof(count));
        int maxfactor = 0;
        int num = input;
        for (int factor = 2; factor <= input; ++factor)
        {
            while ( num % factor == 0 )
            {
                num = num / factor;
                count[factor]++;
                maxfactor = factor;
            }
        }
        for (int i = 2; i <= maxfactor; ++i)
        {
            if (count[i] == 1)
            {
                printf("%d", i);
            }
            else if (count[i] > 1)
            {
                printf("%d^%d", i, count[i]);
            }
            if (count[i] != 0 && i != maxfactor)
                printf(" * ");
        }
        printf("\n");
    }
    return 0;
}