#include <iostream>

using namespace std;

int
main()
{
    int x, y, i, j;
    int array[100][100];
    
    while(cin >> x >> y)
    {
        for (i = 1; i <= x; i++)
            for (j = 1; j <= y; j++) 
                cin >> array[j][i];
            
        for (i = 1; i <= y; i++)
        {
            for (j = 1; j <= x; j++)
                cout << array[i][j] << " ";
            
            cout << endl;
        }
    }

    return 0;
}
