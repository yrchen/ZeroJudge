/***************************************************************************/
/*  Problem: d511 "小明的作業" from 板橋高中                               */
/*  Language: C++                                                          */
/*  Result: AC (5ms, 710KB) on ZeroJudge                                   */
/*  Author: chchwy at 2009-11-26 11:30:40                                  */
/***************************************************************************/

#include<iostream>

bool isTriangle(int a, int b, int c)
{
    return (a + b) > c;
}
int main()
{
    int a, b, c;
    int score = 0;
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d %d %d", &a, &b, &c);
        if ( isTriangle(a, b, c) &&
                isTriangle(a, c, b) &&
                isTriangle(c, b, a) )
            score++;
    }
    printf("%d\n", score);
}

