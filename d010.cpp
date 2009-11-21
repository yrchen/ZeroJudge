#include <iostream>

using namespace std;

int
main()
{
	int n, s, i;

	while(cin >> n)
	{
		i = 1;
		s = 1;

		while(i++ <= n / 2)
			if(!(n % i))
			{
				s += i;
				cout << "s = " << s << ", i = " << i << endl;
			}

		if(s > n)
			cout << "盈數" << endl;
		else if (s < n)
			cout << "虧數" << endl;
		else
			cout << "完全數" << endl;
	}

	return 0;
}
