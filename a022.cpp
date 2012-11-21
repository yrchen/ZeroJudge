/**********************************************************************************/
/*  Problem: a022 "迴文"                                                        */
/*  Language: C++                                                                 */
/*  Result: AC (0ms, 676KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-10 18:57:14                                         */
/**********************************************************************************/
#include<iostream>
bool isPalin(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i)
        if (str[i] != str[len - i - 1])
            return false;
    return true;
}

int main()
{
    char str[1024];
    while ( scanf("%s", str) == 1 )
    {
        (isPalin(str)) ? puts("yes") : puts("no");
    }
    return 0;
}