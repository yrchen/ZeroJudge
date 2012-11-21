/**********************************************************************************/
/*  Problem: d489 "伏林的三角地" from 板橋高中                          */
/*  Language: C++                                                                 */
/*  Result: AC (6ms, 742KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-19 18:53:57                                         */
/**********************************************************************************/

#include<iostream>
#include<cmath>
int main()
{
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        double s = (a + b + c) / 2;
        double area = sqrt( s * (s - a) * (s - b) * (s - c) );
        printf("%.0lf\n", area * area );
    }
}