/**********************************************************************************/
/*  Problem: d075 "快速排序. " from                                           */
/*  Language: C++                                                                 */
/*  Result: AC (64ms, 2046KB) on ZeroJudge                                        */
/*  Author: chchwy at 2009-11-22 15:12:08                                         */
/**********************************************************************************/

#include<iostream>
#include<sstream>
using namespace std;

int p[100005];

bool cmp(const int a, const int b)
{
    return (a > b);
}

int main()
{
    string line;
    while (getline(cin, line))
    {
        istringstream sin(line);
        int index = 0;
        while (sin >> p[index++]);
        index--;
        sort(p, p + index, cmp);
        for (int i = 0; i < index - 1; ++i)
            printf("%d ", p[i]);
        printf("%d\n", p[index - 1]);
    }
    return 0;
}