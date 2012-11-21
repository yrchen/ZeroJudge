/**********************************************************************************/
/*  Problem: c045 "Rotating Sentences" from ACM 490                               */
/*  Language: C++                                                                 */
/*  Result: AC (6ms, 730KB) on ZeroJudge                                          */
/*  Author: chchwy at 2010-04-23 14:41:24                                         */
/**********************************************************************************/


#include<iostream>
#include<vector>
using namespace std;

//find the max length of strings
int findMaxX(vector<string> &str)
{
    int max = 0;
    for (int i = 0; i < str.size(); ++i)
        if (str[i].size() > max)
            max = str[i].size();
    return max;
}

int main()
{
    vector<string> str;
    //read input
    string line;
    while ( getline(cin, line) )
        str.push_back(line);
    //find the bound
    int max_y = str.size();
    int max_x = findMaxX(str);
    //output
    for (int i = 0; i < max_x; ++i)
    {
        for (int j = max_y - 1; j >= 0; --j)
        {
            char c = (i < str[j].size()) ? str[j][i] :  ' ';
            putchar(c);
        }
        putchar('\n');
    }
    return 0;
}

