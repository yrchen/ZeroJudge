#include <iostream>

using namespace std;

int
main()
{
	int year;

	while(cin >> year)
	{
		if ((!(year % 4) && (year % 100)) || !(year % 400))
			cout << "閏年" << endl;
		else
			cout << "平年" << endl;
	}


	return 0;
}
