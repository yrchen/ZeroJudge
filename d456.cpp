/**********************************************************************************/
/*  Problem: d456 "社辦合併" from raincole                                    */
/*  Language: C++                                                                 */
/*  Result: AC (6ms, 764KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-17 19:50:30                                         */
/**********************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int numCase;
    scanf("%d ", &numCase);
    string line;
    while ( numCase-- )
    {
        getline(cin, line);
        string club;
        getline(cin, club);
        int a = line.find_last_of(club[0]);
        int b = line.find_last_of(club[1]);
        if (a > b)swap(a, b);
        cout << line.substr(0, a + 1) << line.substr(b, line.length() - b ) << endl;
        cout << line.substr(a + 1, b - a - 1) << endl;
    }
}