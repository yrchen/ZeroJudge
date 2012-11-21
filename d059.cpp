/**********************************************************************************/
/*  Problem: d059 "數學函數練習"                                            */
/*  Language: C++                                                                 */
/*  Result: AC (4ms, 759KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-11 19:49:43                                         */
/**********************************************************************************/

#include<iostream>
#include<cmath>
int main()
{
    //freopen("test.in","r",stdin);
    int a, b;
    while (scanf("%d %d", &a, &b) == 2)
    {
        //first
        printf("%d\n", (int)pow(a, b) );
        //second
        scanf("%d", &a);
        printf("%.3lf\n", sqrt(a) );
        //third
        scanf("%d", &a);
        printf("%d\n", abs(a) );
        //forth
        scanf("%d %d", &a, &b );
        printf("%d\n", (rand() % abs(a - b)) + a );
    }
    return 0;
}