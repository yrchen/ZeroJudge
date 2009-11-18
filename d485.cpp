#include <iostream>

using namespace std;

int
main()
{
    long long int a, b, c;
    
    while(cin >> a >> b)
    {
//        for(c = 0; a <= b; a++)
//            c = a % 2 ? (c) : (c + 1);

        c = ((b % 2) && (a % 2)) ? ((b - a) / 2) : ((b % 2) && !(a % 2) ? ((b - a) / 2 + 1) : ((b - a) / 2 + 2));
            
        cout << c << endl;
    }
    
    return 0;
}
