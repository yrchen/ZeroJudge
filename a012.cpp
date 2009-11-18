#include <iostream>

using namespace std;

int
main()
{
    long long int a, b, r;
    
    while(cin >> a >> b)
    {
        r = a > b ? (a - b) : (b - a);
        cout << r << endl;
    }

    return 0;
}
