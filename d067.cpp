#include <iostream>

using namespace std;

int
main()
{
    int n;
    
    while(cin >> n)
    {
        cout << "a ";
        
        if ((!(n % 4) && (n % 100)) || !(n % 400))
            cout << "leap";
        else
            cout << "normal";
    
        cout << " year" << endl;
    }
    
    return 0;
}
