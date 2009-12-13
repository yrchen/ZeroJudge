/**********************************************************************************/
/*  Problem: a007 "判斷質數"                                                  */
/*  Language: C++                                                                 */
/*  Result: AC (12ms, 688KB) on ZeroJudge                                         */
/*  Author: chchwy at 2009-11-10 12:14:39                                         */
/**********************************************************************************/

#include<iostream>
#include<cmath>
int main() {

    int num;
    while (scanf("%d", &num)==1) {
        int isPrime=1;
        for (int i=2;i*i<=num;++i) {
            if (num%i==0) {
                isPrime=0;
                break;
            }
        }
        if (isPrime) puts("質數");
        else puts("非質數");
    }
    return 0;
}
