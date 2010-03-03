#include<iostream>
#include<cmath>

int main(){

	int caseNum;
	scanf("%d", &caseNum);

	while(caseNum--){

		int numDrink, price;
		scanf("%d %d", &numDrink, &price);

     	int smile = ceil((numDrink/2*price) * 6.0/10.0) + (numDrink-numDrink/2)*price;   
	    int lion  = ceil(numDrink*price*812.0/1000.0) ;

		if(smile<lion)
			puts(": )");
		else if(smile>lion)
			puts("8-12=-4");
		else
			puts("SAME");
	}
	return 0;
}

