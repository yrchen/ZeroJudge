/**********************************************************************************/
/*  Problem: d244 "一堆石頭" from                                                 */
/*  Language: C++                                                                 */
/*  Result: AC (108ms, 2688KB) on ZeroJudge                                       */
/*  Author: chchwy at 2009-11-12 11:54:43                                         */
/**********************************************************************************/

#include<iostream>

int num[1000000];
char str[1000000];

int main()
{
    //freopen("z.in","r",stdin);
    while (fgets(str, sizeof(str), stdin))
    {
        int index = 0;
        char *p = strtok(str, " \n");
        while (p)
        {
            num[index++] = atoi(p);
            p = strtok(NULL, " \n");
        }
        std::sort(num, num + index);
        for (int i = 0; i < index; i += 3)
        {
            if (num[i] != num[i + 2])
            {
                printf("%d\n", num[i]);
                break;
            }
        }
    }
    return 0;
}