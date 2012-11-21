/**********************************************************************************/
/*  Problem: d466 "今天是第幾天呢" from 麗山高中迴圈36題            */
/*  Language: C++                                                                 */
/*  Result: AC (4ms, 722KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-17 21:34:52                                         */
/**********************************************************************************/

#include<iostream>

bool isLeap(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

int main()
{
    int normalMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leapMonth[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d;
    while (scanf("%d %d %d", &y, &m, &d) == 3)
    {
        //error check
        if ( y <= 0 || m <= 0 || d <= 0 )
        {
            puts("Error");
            continue;
        }
        if (m > 12)
        {
            puts("Error");
            continue;
        }
        int *curM;
        if (isLeap(y))
            curM = leapMonth;
        else
            curM = normalMonth;
        if ( d > curM[m] )
        {
            puts("Error");
            continue;
        }
        int sum = 0;
        for (int i = 1; i < m; ++i)
        {
            sum += curM[i];
        }
        sum += d;
        if (sum == 1)
            printf("It is 1 day in %d\n", y);
        else
            printf("It is %d days in %d\n", sum, y);
    }
    return 0;
}