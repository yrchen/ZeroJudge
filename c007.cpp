/**********************************************************************************/
/*  Problem: c007 "TeX Quotes" from ACM 272                                       */
/*  Language: C++                                                                 */
/*  Result: AC (8ms, 652KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-13 11:06:08                                         */
/**********************************************************************************/

#include<iostream>

int main()
{
    int c;
    int inQuotes = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '"')
        {
            if (inQuotes) //close quotes
            {
                putchar('\'');
                putchar('\'');
            }
            else   //start quotes
            {
                putchar('`');
                putchar('`');
            }
            inQuotes = !inQuotes;
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}