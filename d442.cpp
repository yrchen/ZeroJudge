/**
 * UVa 10591 Happy Number
 * Author: chchwy
 * Last Modified: 2010.01.30
 */
#include<iostream>
#include<set>
using namespace std;

enum{NOT_SET=0, HAPPY=1, UNHAPPY=2};
char happy[1000]={0}; 

void setTable(int state, set<int>& path){
	set<int>::iterator it;
	for(it=path.begin(); it!=path.end(); ++it)
		if( *it < 1000 )
			happy[ *it ] = state;
}

// look up the table,
// return the result that was saved before.
inline int checkHappy(int n){
	if (num>=1000)
		return NOT_SET;
	return happy[n]; 
}

int toNext(int n){
	int sum=0;
	while( n!=0 ){
		int tmp = n%10;
		sum += tmp*tmp;
		n /= 10;
	}
	return sum;
}

bool isHappy(int num){
	set<int> path;
	while( path.insert(num).second ){
		
		int state = checkHappy(num);
		if( state==HAPPY ) {
			setTable( HAPPY, path);
			return true;
		}else if(state==UNHAPPY){
			setTable( UNHAPPY, path)
			return false;
		}
		//state == NOT_SET;
		num  = toNext(num);
	}
	//insert fail
	setTable(UNHAPPY, path);
	return false;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("10591.in","r",stdin);
	#endif

	happy[1] = HAPPY; //1 is a happy number;

	int i=1, num;
	while(scanf("%d",&num)==1){
		
		if( isHappy(num) )
			printf("Case #%d: %d is a Happy number.\n",i,num);
		else 
			printf("Case #%d: %d is an Unhappy number\n",i,num);
	}
	return 0;
}
