#include <iostream>

using namespace std;

int
main()
{
    int n;
    
    while(cin >> n)
    {
        n = n > 50 ? (n - 1) : (n);
        cout << n << endl;
    }
    
    return 0;
}
