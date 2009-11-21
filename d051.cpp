#include <iostream>

using namespace std;

int
main()
{
	double a;

	while(cin >> a)
		printf("%.3f\n", (a-32) * 5 / 9);

	return 0;
}
