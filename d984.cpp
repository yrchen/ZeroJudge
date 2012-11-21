/**********************************************************************************/
/*  Problem: d984 "棄保效應" from 板橋高中教學題                               */
/*  Language: CPP (678 Bytes)                                                     */
/*  Result: AC(4ms, 368KB) judge by this@ZeroJudge                                */
/*  Author: chchwy at 2012-11-20 10:46:18                                         */
/**********************************************************************************/
#include<iostream>
#include<algorithm>
using std::cin;
using std::cout;
using std::endl;

struct Candidate
{
    char name;
    long long vote;
} cand[3];

bool comp_vote(Candidate c1, Candidate c2)
{
    return (c1.vote < c2.vote);
}

int main()
{
    while (cin >> cand[0].vote >> cand[1].vote >> cand[2].vote)
    {
        cand[0].name = 'A';
        cand[1].name = 'B';
        cand[2].name = 'C';
        std::sort(cand, cand + 3, comp_vote);
        // 排序過後cand[2]就是得票最多的人，cand[1]次之
        if (cand[2].vote > cand[0].vote + cand[1].vote)
        {
            cout << cand[2].name << endl;
        }
        else
        {
            cout << cand[1].name << endl;
        }
    }
    return 0;
}

