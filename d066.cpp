/**********************************************************************************/
/*  Problem: d066 "上學去吧！" from 板橋高中                             */
/*  Language: C++                                                                 */
/*  Result: AC (5ms, 687KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-11 20:56:59                                         */
/**********************************************************************************/

#include<iostream>

int main()
{
    int h, m;
    while ( scanf("%d %d", &h, &m) == 2 )
    {
        if ( (h > 7 && h < 17) || (h == 7 && m >= 30) )
            puts("At School");
        else
            puts("Off School");
    }
    return 0;
}
