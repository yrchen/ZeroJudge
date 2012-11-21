/**********************************************************************************/
/*  Problem: d068 "該減肥了！" from 板橋高中                             */
/*  Language: C++                                                                 */
/*  Result: AC (4ms, 720KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-12 17:09:15                                         */
/**********************************************************************************/
#include<iostream>
int main()
{
    int weight;
    while (scanf("%d", &weight) == 1)
    {
        weight > 50 && (weight -= 1);
        printf("%d\n", weight);
    }
}