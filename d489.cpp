#include <iostream>

using namespace std;

int
main()
{
    int a, b, c, p, s;
    
    while(cin >> a >> b >> c)
    {
        p = (a + b + c) / 2;
        cout << p * (p - a) * (p - b) * (p - c) << endl;
    }

    return 0;
}
