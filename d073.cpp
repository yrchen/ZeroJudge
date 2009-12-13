/**********************************************************************************/
/*  Problem: d073 "分組報告" from 板橋高中                                */
/*  Language: C++                                                                 */
/*  Result: AC (3ms, 716KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-12 10:17:59                                         */
/**********************************************************************************/
#include<iostream>
int main() {
    int num;
    while (scanf("%d", &num)==1)
        printf("%d\n", (num-1)/3 + 1 );
	return 0;
}
