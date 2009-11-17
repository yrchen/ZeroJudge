#include <iostream>
#include <math.h>

using namespace std;

int
is_prime(long x)
{
    int i;

    if (x < 2)
        return 1;

    for(i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
            return 0;
    }
    
    return 1;
}

int
main()
{
    long x;
    int a, b;
    
    a = 1;
    b = 0;

    while(cin >> x)
    {
        if (is_prime(x))
            cout << x << endl;
        else
        {
            while(x > 1)
            {
                a++;
                
                if (is_prime(a))
                {
                    if (x % a == 0)
                    {
                        cout << a;
                        b = 0;
                    
                        while (x % a == 0)
                        {
                            b++;
                            x = x / a;
                        }

                        if (b > 1)
                            cout << "^" << b;
                        if (x > 1)
                            cout << " * ";
                    }
                }
            }
            
            cout << endl;
            a = 1;
        } 
    }
    
    return 0;
}
