#include<iostream>
int main()
{
    int numCase;
    scanf("%d", &numCase);
    while (numCase--)
    {
        int x1, y1, x2, y2, x3, y3;
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        if ( ((x3 >= x1) && (x3 <= x2) || (x3 >= x2) && (x3 <= x1)) && ((y3 >= y1) && (y3 <= y2) || (y3 >= y2) && (y3 <= y1)) )
        {
            //若外積為零，代表三點共線
            int out = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
            if ( out == 0 ) puts("該死的東西!竟敢想讓我死！");
            else puts("父親大人!母親大人!我快到了！");
        }
        else
            puts("父親大人!母親大人!我快到了！");
    }
    return 0;
}
