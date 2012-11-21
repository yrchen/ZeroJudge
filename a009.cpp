/**********************************************************************************/
/*  Problem: a009 "解碼器" from ACM 458                                        */
/*  Language: C++                                                                 */
/*  Result: AC (0ms, 648KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-10 13:48:48                                         */
/**********************************************************************************/

#include<iostream>
int main() {int c; while ((c = getchar()) != EOF && putchar((c > 31) ? c - 7 : c)); }