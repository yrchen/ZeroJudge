#include <iostream>

using namespace std;

int
main()
{
    int n, r;
    
    while(cin >> n)
    {
        r = n > 0 ? 1 : (n < 0 ? -1 : 0);
        cout << r << endl;
    }
    
    return 0;
}
