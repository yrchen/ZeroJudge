#include<cstdio>

enum {HP = 0, ATTACK = 1, DEFEND = 2};

inline int zeroBound(int n)
{
    return (n > 0) ? n : 0;
}

int play(int e[], int p[], int& round )
{
    round = 0;
    while (1)
    {
        ++round;
        //player attak first
        e[HP] -= zeroBound(p[ATTACK] - e[DEFEND]);
        if ( e[HP] <= 0 )
            return 1;
        //enemy attack
        p[HP] -= zeroBound(e[ATTACK] - p[DEFEND]);
        if ( p[HP] <= 0 )
            return 0;
    }
}

int main()
{
    int p[3], e[3]; //player & enemy
    while (scanf("%d%d%d%d%d%d", p, p + 1, p + 2, e, e + 1, e + 2) == 6 )
    {
        if (p[HP] == 0 && e[HP] == 0 )
            break;
        int round;
        int win = play(e, p, round);
        if (win) printf("You win in %d round(s).\n", round);
        else printf("You lose in %d round(s).\n", round);
    }
}
