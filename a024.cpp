#include <iostream>

using namespace std;

int
gcd(int x, int y)
{
    if (y)
        return gcd(y, x % y);
    else
        return x;
}

int
main()
{
    int x, y;
    
    while(cin >> x >> y)
    {
        cout << gcd (x, y) << endl;
    }
    
    return 0;
}
