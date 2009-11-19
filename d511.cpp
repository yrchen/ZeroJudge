#include <iostream>

using namespace std;

#define MAX(a, b)	((a > b) ? (a) : (b))

int
main()
{
    int a, b, c, count, i, m, t;
    
    while(i)
    {
        i = 1;
        count = 0;

        while(cin >> a >> b >> c)
        {
            t = a + b + c;
            m = MAX(a, MAX(b, c));
            
            if ((t - m) > m)
                count++;
            
            if (i++ == 5)
                break;
        }
        
        cout << count << endl;
    }
    
    return 0;
}
