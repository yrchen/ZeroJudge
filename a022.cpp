#include <iostream>
#include <string>

using namespace std;

int
main()
{
    string input;
    int i, length, wrong_flag;
    
    while(cin >> input)
    {
        i = 0;
        length = input.length();
        wrong_flag = 0;

        while(i < length / 2)
        {
            if (input[i] != input[length - 1 - i])
            {
                wrong_flag = 1;
                break;
            }
            else
                i++;
        }

        if(wrong_flag)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }

    return 0;
}
