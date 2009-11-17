#include <iostream>
#include <math.h>

using namespace std;

int
main()
{
	int judge, solve, root, root2;
	double a,b,c;

	while (cin >> a >> b >> c)
	{
        	judge = b * b - 4 * a * c;

        	if (judge < 0 )
			cout << "No real root" << endl;
		else if (judge == 0)
		{
			root = (-b + sqrt(judge)) / (2 * a);
			cout << "Two same roots x=" << root << endl;
		}
		else
		{
			root = (-b + sqrt(judge)) / (2 * a);
			root2 = (-b - sqrt(judge)) / (2 * a);
			cout << "Two different roots x1=" << root << " , x2=" << root2 << endl;
		}
        }

	return 0;
}

