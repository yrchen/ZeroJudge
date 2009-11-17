#include <iostream>

using namespace std;

int
main()
{
    int h;
    
    while(cin >> h)
        cout << (h + 9) % 24 << endl;
        
    return 0;
}
