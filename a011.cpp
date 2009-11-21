#include <iostream>
#include <string>

using namespace std;

int
main()
{
    char input[100];

    int i, c, length;
    
    while(cin.getline(input, 100))
    {
        i = 0;
        c = 1;

        while(input[i] != '\0')
            i++;

        length = i--;
        i = 0;

        while(i < length)
        {
            if (!(((input[i] >= 'a') && (input[i] <= 'z')) || ((input[i] >= 'A') && (input[i] <= 'Z'))))
            {
                c++;
                i++;
            }
            else
                i++;
        }

        cout << c << endl;
    }

    return 0;
}
