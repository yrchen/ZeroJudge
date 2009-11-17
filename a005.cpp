#include <iostream>

using namespace std;

int
main()
{
	int i, n;
	float list[20][4];

	cin >> n;

	for(i = 0; i < n; ++i)
		cin >> list[i][0] >> list[i][1] >> list[i][2] >> 
list[i][3];

	for(i = 0; i < n; ++i)
	{
		if(list[i][3] / list[i][2] == list[i][1] / list[i][0])
			cout << list[i][0] << " " << list[i][1] << " " << list[i][2] << " " << list[i][3] << " " << list[i][3] * list[i][1] / list[i][0] << endl;
		else
			cout << list[i][0] << " " << list[i][1] << " " << list[i][2] << " " << list[i][3] << " " << list[i][3] + list[i][3] - list[i][2] << endl;
	}

	return 0;
}
