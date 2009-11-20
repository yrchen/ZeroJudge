#include <iostream>

using namespace std;

int
main()
{
    int i, n, list[100];
    
    while(cin >> n)
    {
        for(i = 0; n > 0; i++, n--)
            cin >> list[i];

        for(i-- ; i >= 0; i--)
        {
            cout << "a ";
        
            if ((!(list[i] % 4) && (list[i] % 100)) || !(list[i] % 400))
                cout << "leap";
            else
                cout << "normal";
    
            cout << " year" << endl;
        }
    }
    
    return 0;
}
