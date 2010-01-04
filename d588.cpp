#include<iostream>
using namespace std;

int main(){

    int numCase;
    scanf("%d",&numCase);

    while(numCase--){
        int maxHeight=0;

        //find the highest position
        int numTree;
        scanf("%d", &numTree);
        for(int i=0;i<numTree;++i){
            int x1,y1,h1, x2,y2,h2;
            scanf("%d%d%d%d%d%d", &x1,&y1,&h1,&x2,&y2,&h2);

            if( h1>maxHeight ) maxHeight = h1;
            if( h2>maxHeight ) maxHeight = h2;
        }
        printf("%d\n", maxHeight );
    }
    return 0;
}
