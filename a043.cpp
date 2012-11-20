#include<iostream>

int main(){
	int line;
	while(scanf("%d", &line)==1){
		if(line==1) puts("2");
		else if(line==0) puts("1");
		else
			printf("%d\n", 2+(2+line)*(line-1)/2 );
	}
	return 0;
}
