/**********************************************************************************/  
/*  Problem: c067 "Box of Bricks" from ACM 591                                    */  
/*  Language: C++                                                                 */  
/*  Result: AC (6ms, 716KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-19 20:15:58                                         */  
/**********************************************************************************/  
#include<iostream>  
int main(){  
  
    int numCase=1;  
    int numWall=0;  
    while(scanf("%d",&numWall)==1){  
        if(numWall==0) break;  
  
        int wall[64];  
        int sum=0;  
        for(int i=0;i<numWall;++i){  
            scanf("%d", wall+i);  
            sum+=wall[i];  
        }  
  
        int avg = sum/numWall;  
        int move = 0;  
        for(int i=0;i<numWall;++i)  
            if(wall[i]>avg)  
                move += wall[i]-avg;  
  
        printf("Set #%d\n", numCase++);  
        printf("The minimum number of moves is %d.\n\n",move);  
    }  
}  