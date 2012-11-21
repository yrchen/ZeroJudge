/**********************************************************************************/
/*  Problem: c097 "Arbitrage" from ACM 104                                        */
/*  Language: C++                                                                 */
/*  Result: AC (8ms, 792KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-13 11:03:12                                         */
/**********************************************************************************/

#include<iostream>

enum {MAX = 20};
int main()
{
    int n; //the dimension of table
    double profit[MAX][MAX][MAX];
    int path[MAX][MAX][MAX]; //backtracking
    while (scanf("%d", &n) == 1)
    {
        // initialization
        //profit[s][i][j] = 0, for all s,i,j
        for (int s = 0; s < n; ++s)
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < n; ++j)
                    profit[s][i][j] = 0.0;
        //profit[0][i][j] = input for the program
        //profit[0][i][i] = 1, for all i
        //path[0][i][j] = i, for all i, j
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i == j)
                    profit[0][i][j] = 1.0;
                else
                    scanf("%lf", &profit[0][i][j]);
                path[0][i][j] = i;
            }
        }
        //Floyd-Warshall
        for (int steps = 1; steps < n; ++steps)
        {
            for (int k = 0; k < n; ++k) //intermediate node k
            {
                for (int i = 0; i < n; ++i) //path from i to j
                {
                    for (int j = 0; j < n; ++j)
                    {
                        double tmp = profit[steps - 1][i][k] * profit[0][k][j];
                        if (tmp > profit[steps][i][j])
                        {
                            profit[steps][i][j] = tmp;
                            path[steps][i][j] = k;
                        }
                    }
                }
            }
        }
        //Find the shortest path to profit 1%
        int steps, targetNo = -1; //targetNo = the number of currency we want
        for (steps = 1; steps < n; steps++)
        {
            for (int i = 0; i < n; i++)
            {
                if (profit[steps][i][i] > 1.01)
                {
                    targetNo = i;
                    break;
                }
            }
            if (targetNo != -1)
                break;
        }
        //output
        if (targetNo == -1)
            printf("no arbitrage sequence exists\n");
        else
        {
            int outputSeq[MAX]; //for reverse sequnece
            int index = 0;
            int currentNo = targetNo;
            outputSeq[index++] = targetNo;
            for (int s = steps; s >= 0; --s) //path from targetNo to currentNo
            {
                currentNo = path[s][targetNo][currentNo];
                outputSeq[index++] = currentNo;
            }
            for (int i = index - 1; i > 0; --i)
                printf("%d ", outputSeq[i] + 1);
            printf("%d\n", outputSeq[0] + 1);
        }
    }
    return 0;
}