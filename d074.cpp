/**********************************************************************************/
/*  Problem: d074 "電腦教室" from 板橋高中                                */
/*  Language: C++                                                                 */
/*  Result: AC (4ms, 718KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-12 11:09:38                                         */
/**********************************************************************************/

#include<iostream>

int main()
{
    int num;
    while (scanf("%d", &num) == 1)
    {
        int max = 0;
        for (int i = 0; i < num; ++i)
        {
            int tmp;
            scanf("%d", &tmp);
            if (tmp > max)
                max = tmp;
        }
        printf("%d\n", max);
    }
    return 0;
}
