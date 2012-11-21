/**********************************************************************************/
/*  Problem: c081 "Ecological Bin Packing" from ACM 102                           */
/*  Language: C++                                                                 */
/*  Result: AC (4ms, 762KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-13 11:07:39                                         */
/**********************************************************************************/
#include<iostream>
#include<string>
using namespace std;

enum { B = 0, C = 1, G = 2 };

int main()
{
    int bin[3][3];
    int currentMove = 0;
    int totalGlasses = 0;
    //六種排列組合
    int binColor[][3] = { {B, C, G}, {B, G, C}, {C, B, G},
        {C, G, B}, {G, B, C}, {G, C, B}
    };
    string s[] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
    while (scanf("%d%d%d%d%d%d%d%d%d",
                 &bin[0][B], &bin[0][G], &bin[0][C],
                 &bin[1][B], &bin[1][G], &bin[1][C],
                 &bin[2][B], &bin[2][G], &bin[2][C]) != EOF)
    {
        totalGlasses = 0;
        for (int i = 0; i < 3; i++)
            totalGlasses += (bin[i][B] + bin[i][G] + bin[i][C]);
        int minMove = totalGlasses;
        int minNo = 0; //第minNo號排列組合move最少
        //六種排列組合都跑過一次
        for (int i = 0; i < 6; i++) //移動的次數 = 總瓶數-不用移動的瓶數
        {
            currentMove = totalGlasses
                          - bin[0][binColor[i][0]]
                          - bin[1][binColor[i][1]]
                          - bin[2][binColor[i][2]];
            if (currentMove < minMove)
            {
                minMove = currentMove;
                minNo = i;
            }
        }
        cout << s[minNo] << " " << minMove << endl;
    }
    return 0;
}