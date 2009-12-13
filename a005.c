/**********************************************************************************/
/*  Problem: a005 "Eva 的回家作業" from POJ                                  */
/*  Language: C                                                                   */
/*  Result: AC (2ms, 260KB) on ZeroJudge                                          */
/*  Author: chchwy at 2009-11-10 11:07:14                                         */
/**********************************************************************************/

#include<stdio.h>

int main() {
    int s0,s1,s2,s3;
    scanf("%d ",&s0);
    while ( scanf("%d %d %d %d",&s0,&s1,&s2,&s3)==4 ) {
        if ( (s3-s2) == (s2-s1) )
            printf("%d %d %d %d %d\n", s0,s1,s2,s3,s3+(s3-s2));
        else
            printf("%d %d %d %d %d\n", s0,s1,s2,s3,s3*(s3/s2));
    }
    return 0;
}
