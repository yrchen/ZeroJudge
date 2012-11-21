/**********************************************************************************/
/*  Problem: d117 "10924 - Prime Words" from UVa ACM 10924                        */
/*  Language: C++                                                                 */
/*  Result: AC (4ms, 738KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-22 20:24:07                                         */
/**********************************************************************************/

/*
 * UVa 10924 Prime Words (AC)
 * Author: chchwy
 * Last Modified: 2009.11.22
 */
#include<iostream>
#include<sstream>
#include<cctype>
using namespace std;
enum {MAX = 52 * 20 + 2};

int p[MAX]; //0=prime, 1=not prime

void shieve()
{
    p[0] = p[1] = 0;
    for (int i = 2; i * i < MAX; ++i)
    {
        if (p[i] == 1) continue;
        for (int j = i * i; j < MAX; j += i)
            p[j] = 1;
    }
}

int main()
{
    shieve();
    string line;
    while (getline(cin, line))
    {
        int sum = 0;
        //for each char
        for (int i = 0; i < line.length(); ++i)
        {
            if ( islower(line[i]) )
                sum += line[i] - 'a' + 1;
            else
                sum += line[i] - 'A' + 27;
        }
        if (p[sum] == 0)
            puts("It is a prime word.");
        else
            puts("It is not a prime word.");
    }
    return 0;
}