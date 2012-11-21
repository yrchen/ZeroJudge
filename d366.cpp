/**********************************************************************************/
/*  Problem: d366 "Q294: Divisors" from ACM 294                                   */
/*  Language: C++                                                                 */
/*  Result: AC (880ms, 816KB) on ZeroJudge                                        */
/*  Author: chchwy at 2010-01-27 14:09:17                                         */
/**********************************************************************************/

#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

enum {MAX = 1000000000, SQRT_MAX = 31622}; //sqrt(1000000000) = 31622

char isPrime[SQRT_MAX] = {0};
vector<int> primeTable;

int shieve()
{
    isPrime[0] = 0;
    isPrime[1] = 0;
    isPrime[2] = 1;
    for (int i = 3; i < SQRT_MAX; ++i)
        isPrime[i] = i % 2;
    //shieve
    int sqrt_n = sqrt((int)SQRT_MAX);
    for (int i = 3; i < sqrt_n; i += 2)
    {
        if (isPrime[i] == 0) continue;
        for (int j = i * i; j < SQRT_MAX; j += i)
            isPrime[j] = 0;
    }
    //push all prime number into vector "primNum"
    primeTable.clear();
    for (int i = 2; i < SQRT_MAX; ++i)
        if (isPrime[i])
            primeTable.push_back(i);
}

//回傳 num 總共有幾個divisor
int getDivisorNumber(int n)
{
    if ( n == 1 ) return 1;
    if ( n < SQRT_MAX && isPrime[n] ) return 2;
    int total = 1;
    int tmp = n;
    for (int i = 0 ; i < primeTable.size(); ++i)
    {
        int divisor = primeTable[i];
        if ( divisor * divisor > n )
            break;
        int exp = 1; //算這個因數總共有幾個
        for ( ; tmp % divisor == 0 ; exp++ )
        {
            tmp /= divisor;
        }
        total *= exp;
        if ( tmp == 1 ) return total;
    }
    if (total != 1) return total * 2; //還剩下一個大於sqrt(n)的因數
    return 2;
}

int main()
{
    shieve(); //build the prime table
    int numCase;
    scanf("%d", &numCase);
    while (numCase--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int max = 0 , maxDivisor = 0;
        for ( int i = a; i <= b; ++i)
        {
            int curDivisor = getDivisorNumber(i);
            if ( curDivisor > maxDivisor )
            {
                max = i;
                maxDivisor = curDivisor;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", a, b, max, maxDivisor);
    }
    return 0;
}

