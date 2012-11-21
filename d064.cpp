/**********************************************************************************/
/*  Problem: d064 "ㄑㄧˊ 數？" from 板橋高中                             */
/*  Language: C++                                                                 */
/*  Result: AC (3ms, 688KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-11 20:08:39                                         */
/**********************************************************************************/
#include<iostream>
int main()
{
    int a;
    char str[2][10] = {"Even", "Odd"};
    while (scanf("%d ", &a) == 1) puts( str[a % 2] );
}