#include <iostream>

using namespace std;

int
main()
{
    char s[100];
    int i;
    
    while(cin >> s)
    {
        i = 0;

        while(s[i] != '\0')
        {
            s[i] += -7;
            cout << s[i++];
        }
        
        cout << endl;
    }
    
    return 0;
}
