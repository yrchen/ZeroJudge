/**********************************************************************************/  
/*  Problem: d087 "107 - The Cat in the Hat" from Uva ACM 107                     */  
/*  Language: C++                                                                 */  
/*  Result: AC (2ms, 718KB) on ZeroJudge                                          */  
/*  Author: chchwy at 2009-11-20 19:14:06                                         */  
/**********************************************************************************/  
#include<iostream>  
  
int main(){  
    int initHeight, kitten; //start height, number of kitten  
  
    scanf("%d %d", &initHeight, &kitten);  
    while(initHeight!=0 || kitten!=0){  
  
        if(initHeight==1 && kitten==1)  
            printf("0 1\n");  
        else if(initHeight==1 )  
            printf("1 %d\n",kitten);  
  
        for(int n=2;n<=initHeight;++n){  
  
            int height = initHeight;  
            int nowCat = 1;  
  
            //output  
            int totalCat=0;  
            int notWorkCat=0;  
  
            while( (height%n)==0 ){  
                totalCat += height*nowCat;  
                notWorkCat += nowCat;  
  
                height = height/n;  
                nowCat = nowCat*(n-1);  
            }  
  
            if(nowCat==kitten){  
                totalCat += nowCat;  
                printf("%d %d\n", notWorkCat, totalCat);  
                break;  
            }  
        }  
        scanf("%d %d", &initHeight, &kitten);  
    }  
    return 0;  
}