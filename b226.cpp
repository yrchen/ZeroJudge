#include<iostream>

int main(){
	int hL,hW; //house
	int x,y; //block

	while(scanf("%d %d %d %d", &hL, &hW, &x, &y)==4){
		if(hL==0) break;

		if( hL%x==0 && hW%y==0)
			printf("%d\n", (hL/x)*(hW/y));
		else if ( hL%y==0 && hW%x==0 )
			printf("%d\n", (hL/y)*(hW/x));
		else
			puts("-1");
	}

	return 0;
}
