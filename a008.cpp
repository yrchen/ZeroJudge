#include <iostream>

using namespace std;

int
main()
{
    string n[10] = {"¹s", "³ü", "¶L", "°Ñ", "¸v", "¥î", "³°", "¬m", "®Ã", "¨h"};
    string m[10] = {"¬B", "¨Õ", "¥a", "¸U", "¬B", "¨Õ", "¥a", "»õ", "¬B", "¨Õ"};
    char input[10];
    int i, j, length;
    
    while(cin >> input)
    {
        i = 0;
        
        while(input[i] != '\0')
            i++;
        
        length = i - 1;

        for(i = length; i >= 0; i--)
        {
            j = input[length - i] - '0';

            if ((i && j) || (!i && j))
            {
                cout << n[j];

                if (i > 0)
                    cout << m[i - 1];
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
