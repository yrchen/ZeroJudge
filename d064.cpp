#include <iostream>

using namespace std;

int
main()
{
    int n;
    string r;
    
    while(cin >> n)
    {
        r = n % 2 ? "Odd" : "Even";
        cout << r << endl;
    }
    
    return 0;
}
