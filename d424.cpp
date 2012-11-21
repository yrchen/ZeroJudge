/**********************************************************************************/
/*  Problem: d424 "Q105: The Skyline Problem" from ACM 105                        */
/*  Language: C++                                                                 */
/*  Result: AC (7ms, 752KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-27 18:58:18                                         */
/**********************************************************************************/

#include<iostream>
using namespace std;

enum {LEFT = 0, HEIGHT = 1, RIGHT = 2};

int main()
{
    int bb[3]; //building
    int map[10000];
    int rightBound = 0; //max position
    memset(map, 0, sizeof(map));
    //read and brute force
    while (scanf("%d %d %d", &bb[LEFT], &bb[HEIGHT], &bb[RIGHT]) == 3)
    {
        for (int i = bb[LEFT]; i < bb[RIGHT]; ++i)
        {
            if (bb[HEIGHT] > map[i])
                map[i] = bb[HEIGHT];
        }
        if (bb[RIGHT] > rightBound)
            rightBound = bb[RIGHT];
    }
    //output
    int prev = 0;
    for (int i = 0; i < rightBound; ++i)
    {
        if (prev == map[i])
            continue;
        printf("%d %d ", i, map[i]);
        prev = map[i];
    }
    printf("%d %d\n", rightBound, 0); //can't use map[rightBound], i don't know why
    return 0;
}