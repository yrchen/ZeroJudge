#include <iostream>

using namespace std;

int
main()
{
    int n, b[100] = {0}, i;

    while(cin >> n)
    {
        for (i = 0; n > 0; i++)
        {
            if (n % 2)
                b[i] = 1;
            else
                b[i] = 0;
            
            n /= 2;
        }

        for (i-- ;i >= 0; i--)
            cout << b[i];
        
        cout << endl;
    }

    return 0;
}
