#include <iostream>

using namespace std;

int
main()
{
    int a, b, c, r;
    
    while(cin >> a >> b >> c)
    {
        r = a >= b ? (a >= c ? a : c) : (c >= b ? c : b);
        cout << r << endl;
    }
    
    return 0;
}
