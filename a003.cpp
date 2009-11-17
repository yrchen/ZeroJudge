#include <iostream>

using namespace std;

int
main()
{
	int a, b;
	string c[3] = {"普通", "吉", "大吉"};

	while(cin >> a >> b)
		cout << c[(a * 2 + b) % 3] << endl;


	return 0;
}
