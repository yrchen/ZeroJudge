/**********************************************************************************/
/*  Problem: d010 "盈數、虧數和完全數" from sagit's C++ 程式設計     */
/*  Language: C++                                                                 */
/*  Result: AC (8ms, 690KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-11 13:54:56                                         */
/**********************************************************************************/

#include<iostream>

int main()
{
    int num;
    while (scanf("%d", &num) == 1)
    {
        int sum = 0;
        for (int factor = 1; factor <= (num / 2); ++factor)
        {
            if (num % factor == 0)
                sum += factor;
        }
        if (sum < num)puts("虧數");
        else if (sum == num) puts("完全數");
        else puts("盈數");
    }
}