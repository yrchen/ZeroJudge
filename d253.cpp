/**
 * UVa 674 Coin Change (AC)
 * Author: chchwy
 * Last Modified: 2010.03.01
 */
#include<iostream>
enum {MAX_MONEY = 7489, COIN_TYPES = 5};

int main()
{
    int coin[] = {1, 5, 10, 25, 50};
    int count[MAX_MONEY + 1];
    memset(count, 0, sizeof(count));
    /* DP to build count table */
    count[0] = 1;
    for (int i = 0; i < COIN_TYPES; ++i)
        for (int j = coin[i]; j <= MAX_MONEY; ++j)
            count[j] += count[j - coin[i]];
    /* just lookup table */
    int money;
    while ( scanf("%d", &money) == 1 )
        printf("%d\n", count[money]);
    return 0;
}


