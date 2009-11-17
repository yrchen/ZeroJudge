#include <iostream>

using namespace std;

int
main()
{
    int n;
    long long r = 1;
    
    while(cin >> n)
    {
        if ((n == 0) || (n == 1))
            cout << "1" << endl;
        else
        {
            while(n > 1)
            {
                r = r * n;
                n--;
            }
            
            cout << r << endl;
            r = 1;
        }
    }
     
    return 0;
}
