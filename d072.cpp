/**********************************************************************************/
/*  Problem: d072 "文文的求婚--續集 (Case 版)" from 板橋高中          */
/*  Language: C                                                                   */
/*  Result: AC (2ms, 262KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-10 15:02:46                                         */
/**********************************************************************************/

int main()
{
    int year;
    int i = 1;
    scanf("%d", &year);
    while (scanf("%d ", &year) == 1 )
    {
        if ( year % 400 == 0)
            printf("Case %d: a leap year\n", i);
        else if (year % 100 == 0)
            printf("Case %d: a normal year\n", i);
        else if (year % 4 == 0)
            printf("Case %d: a leap year\n", i);
        else
            printf("Case %d: a normal year\n", i);
        i++;
    }
    return 0;
}