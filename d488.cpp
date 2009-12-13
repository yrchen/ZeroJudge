#include<iostream>  
using namespace std;  
  
int add(int depth, int sum){  
    int num;  
    scanf("%d", &num);  
    if(depth==1){  
        printf("%d",num);  
        return sum+num;  
    }else{  
        printf("%d + ", num);  
        return add(depth-1, sum+num);  
    }  
}  
  
int main(){  
    int depth; //遞迴深度  
    while(scanf("%d",&depth)==1){  
        if(depth==0) break;  
  
        int sum = add(depth,0);  
        printf(" = %d\n", sum);  
    }  
} 

