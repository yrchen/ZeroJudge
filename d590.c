#include<stdio.h>

int main(){

    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF){
        if(m==0 && n==0) break;

        if( (m&0x01) == (n&0x01) )
            puts("Win");
        else
            puts("Loss");
    }
    return 0;
}
