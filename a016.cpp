/**********************************************************************************/
/*  Problem: a016 "數獨(SUDOKU)"                                                */
/*  Language: C++                                                                 */
/*  Result: AC (6ms, 752KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-18 19:11:23                                         */
/**********************************************************************************/

#include<iostream>
#include<sstream>
#include<bitset>
using namespace std;

bool checkSudo(int sudo[9][9])
{
    //小宮格
    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {
            bitset<10> b;
            for (int x = i; x < i + 3; ++x)
            {
                for (int y = j; y < j + 3; ++y)
                {
                    b.set(sudo[x][y]);
                }
            }
            if (b.count() != 9)
                return false;
        }
    }
    //檢查橫列
    for (int i = 0; i < 9; ++i)
    {
        bitset<10> b;
        for (int j = 0; j < 9; ++j)
            b.set(sudo[i][j]);
        if (b.count() != 9)
            return false;
    }
    //檢查直行
    for (int i = 0; i < 9; ++i)
    {
        bitset<10> b;
        for (int j = 0; j < 9; ++j)
            b.set(sudo[j][i]);
        if (b.count() != 9)
            return false;
    }
    return true;
}
int main()
{
    int sudo[9][9];
    string line;
    while (getline(cin, line))
    {
        for (int i = 0; i < 9; ++i)
        {
            int j = 0;
            istringstream sin(line);
            while (sin >> sudo[i][j++]);
            getline(cin, line);
        }
        if ( checkSudo( sudo ) )
            puts("yes");
        else
            puts("no");
    }
    return 0;
}