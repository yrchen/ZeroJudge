/**********************************************************************************/
/*  Problem: a015 "矩陣的翻轉"                                               */
/*  Language: C++                                                                 */
/*  Result: AC (4ms, 736KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-10 17:46:54                                         */
/**********************************************************************************/

#include<iostream>

int main()
{
    int m[100][100];
    int c, r; //column, row
    while (scanf("%d %d ", &c, &r) == 2)
    {
        for (int i = 0; i < c; ++i)
        {
            for (int j = 0; j < r; ++j)
            {
                scanf("%d", &m[i][j]);
            }
        }
        for (int j = 0; j < r; ++j)
        {
            for (int i = 0; i < c; ++i)
            {
                printf("%d", m[i][j]);
                if (i != c - 1)printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}