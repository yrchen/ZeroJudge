#include<iostream>
#include<cmath>
int smile(int numDrink, int price){ 
	//with discount
	int sum = price * (numDrink/2) * 6 / 10;
	//without discount
	sum += price * (numDrink - numDrink/2);
	return sum;
}

int lion(int numDrink, int price){
	int sum = price * numDrink * 812 / 1000;
	return sum;
}

int main(){

	int numCase;
	scanf("%d", &numCase);

	while(numCase--){
		int numDrink, price;
		scanf("%d %d", &numDrink, &price);
		int s = smile(numDrink, price);
		int l = lion(numDrink, price);
		
		if(s<l)
			puts(": )");
		else if(s>l)
			puts("8-12=-4");
		else
			puts("SAME");
	}
	return 0;
}

