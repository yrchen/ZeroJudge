#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int
main()
{
	double a, b, c, d, e, f;

	while(cin >> a >> b >> c >> d >> e >> f)
	{
    		cout << pow(a, b) << endl;
		printf("%.3f\n", sqrt(c));
		cout << abs(d) << endl;
		cout << e << endl;
	}

	return 0;
}
