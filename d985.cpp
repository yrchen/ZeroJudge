/**********************************************************************************/
/*  Problem: d985 "Gran Turismo 5" from 學姊                                      */
/*  Language: CPP (1222 Bytes)                                                    */
/*  Result: AC(4ms, 426KB) judge by this@ZeroJudge                                */
/*  Author: chchwy at 2012-11-20 22:48:38                                         */
/**********************************************************************************/
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <numeric>
using std::cin;
using std::cout;
using std::vector;
using std::min_element;
using std::accumulate;

int find_best(vector<int>& lap_time)
{
    return *min_element(lap_time.begin(), lap_time.end());
}

int find_avrg(vector<int>& lap_time)
{
    int sum = accumulate(lap_time.begin(), lap_time.end(), 0);
    return (float)sum / lap_time.size();
}

int main()
{
    int num_track;
    cin >> num_track;

    for(int t = 1; t <= num_track; ++t)
    {
        int num_lap;
        cin >> num_lap;

        // 讀取每一圈的時間
        vector<int> lap_time;

        for (int i=0; i<num_lap; ++i)
        {
            int min, sec;
            cin >> min >> sec;
            lap_time.push_back(min*60 + sec);
        }

        // 計算平均與最快圈速
        int best = find_best(lap_time);
        int avrg = find_avrg(lap_time);

        // 輸出結果
        printf("Track %i:\n", t);
        printf("Best Lap: %i minute(s) %i second(s).\n", best/60, best%60);
        printf("Average: %i minute(s) %i second(s).\n", avrg/60, avrg%60);
    }
    return 0;
}