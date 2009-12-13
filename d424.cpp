#include<iostream>    
using namespace std;    
    
enum{LEFT=0,HEIGHT=1,RIGHT=2};    
    
int main(){    
      
    int bb[3]; //building    
    int map[10000];    
    int rightBound=0; //max position    
    
    memset(map,0,sizeof(map));    
    //read and brute force    
    while(scanf("%d %d %d", &bb[LEFT], &bb[HEIGHT], &bb[RIGHT])==3){    
    
        for(int i=bb[LEFT]; i<bb[RIGHT]; ++i){    
            if(bb[HEIGHT] > map[i])    
                map[i] = bb[HEIGHT];    
        }    
        if(bb[RIGHT]>rightBound)    
            rightBound = bb[RIGHT];    
    }    
    
    //output    
    int prev = 0;    
    for(int i=0; i<rightBound; ++i){    
        if(prev==map[i])    
            continue;    
        printf("%d %d ",i,map[i]);    
        prev = map[i];    
    }    
    printf("%d %d\n",rightBound, 0);    
    return 0;    
}

