#include <iostream>

using namespace std;

int
main()
{
    int a, b, r;
    string s[2] = {"At", "Off"};
    
    while(cin >> a >> b)
    {
        r = ((a == 7) && (b >= 30)) ? (0) : (((a >= 8) && (a < 17)) ? (0) : (1));
        cout << s[r] << " School" << endl;
    }
    
    return 0;
}
