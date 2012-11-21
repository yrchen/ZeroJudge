/**********************************************************************************/
/*  Problem: c033 "Prime Cuts" from ACM 406                                       */
/*  Language: C++                                                                 */
/*  Result: AC (6ms, 766KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-22 13:46:05                                         */
/**********************************************************************************/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
enum {MAX = 1001, SQRT_MAX = 32};

char p[MAX]; //prime=0, not prime=1

void shieve()
{
    p[0] = 1;
    p[1] = 0; //本題1算質數
    for (int i = 2; i <= SQRT_MAX; ++i)
    {
        if (p[i] == 1)
            continue;
        for (int j = i * i; j < MAX; j += i)
            p[j] = 1;
    }
}

int main()
{
    shieve();
    int N, C;
    while (scanf("%d %d", &N, &C) == 2)
    {
        printf("%d %d:", N, C);
        vector<int> prime;
        for (int i = 1; i <= N; ++i)
            if (p[i] == 0)
                prime.push_back(i);
        int cuts = (prime.size() % 2 == 0) ? 2 * C : 2 * C - 1;
        int skip = (int)(prime.size() - cuts) / 2;
        if (skip < 0) skip = 0;
        if (cuts > prime.size())cuts = prime.size();
        for (int i = skip; i < skip + cuts; ++i)
            printf(" %d", prime[i]);
        puts("");
    }
    return 0;
}