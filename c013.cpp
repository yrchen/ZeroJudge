/**********************************************************************************/
/*  Problem: c013 "Triangle Wave" from ACM 488                                    */
/*  Language: C++                                                                 */
/*  Result: AC (0ms, 706KB) on ZeroJudge                                          */
/*  Author: chchwy at 2010-02-03 11:49:50                                         */
/**********************************************************************************/

#include<iostream>

void wave(int A){
    int curA=1;
    while(curA<A){
        for(int i=0;i<curA;++i)
            printf("%d",curA);
        printf("\n");

        ++curA;
    }
    while(curA>0){
        for(int i=0;i<curA;++i)
            printf("%d",curA);
        printf("\n");

        --curA;
    }
}

int main(){
    int caseNum;
    scanf("%d", &caseNum);

    while(caseNum--){
        int A,F;
        scanf("%d%d", &A,&F);

        for(int i=0;i<F;++i){
            wave(A);
            printf("\n");
        }
    }
}

