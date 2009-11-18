#include <iostream>

using namespace std;

int
main()
{
    int n, a, max;

    while(cin >> n)
    {
        max = 0;

        while(n > 0)
        {
            cin >> a;
            max = a > max ? a : max;
            n--;
        }

        cout << max << endl;
    }
    
    return 0;
}
