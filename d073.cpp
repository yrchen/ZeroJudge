#include <iostream>

using namespace std;

int
main()
{
	int n, r;
	
	while (cin >> n)
	{
		r = (n % 3) ? (n / 3 + 1) : (n / 3);
		cout << r << endl;
	}
	
	return 0;
}

