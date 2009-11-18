#include <iostream>

using namespace std;

int
main()
{
    int n, r;
    
    while(cin >> n)
    {
        r = n <= 5 ? 0 : (n <= 11 ? 590 : (n <= 17 ? 790 : (n <= 59 ? 890 : 399)));
        cout << r << endl;
    }
    
    return 0;
}
