/**********************************************************************************/
/*  Problem: d460 "山六九之旅" from 板橋高中                             */
/*  Language: C++                                                                 */
/*  Result: AC (2ms, 714KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-12 17:26:21                                         */
/**********************************************************************************/
#include<iostream>
//only use relational operators
int main()
{
    int age;
    while (scanf("%d", &age) == 1)
    {
        int ticket;
        (age <= 5 && !(ticket = 0)) ||
        (age <= 11 && (ticket = 590)) ||
        (age <= 17 && (ticket = 790)) ||
        (age <= 59 && (ticket = 890)) ||
        (ticket = 399);
        printf("%d\n", ticket);
    }
    return 0;
}