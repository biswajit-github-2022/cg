#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void midpoint_circle(int h, int k, int r)
{
    int d, x, y;
    d = (1 - r);
    x = 0;
    y = r;
    while (x <= y)
    {
        putpixel(h + x, k + y, RED);
        putpixel(h + x, k - y, RED);
        putpixel(h - x, k + y, RED);
        putpixel(h - x, k - y, RED);
        putpixel(h + y, k + x, RED);
        putpixel(h + y, k - x, RED);
        putpixel(h - y, k + x, RED);
        putpixel(h - y, k - x, RED);
        if (d < 0)
        {
            x++;
            d += 2 * x + 3;
        }
        else
        {
            x++;
            y--;
            d += 2 * x - 2 * y + 5;
        }
    }
    getch();
}
int main()
{
    int h, k, rads, midx, midy, gd = DETECT, gm;
    printf("Enter the ceneter co-ordinate of the circle : \n");
    scanf("%d%d", &h, &k);
    printf("Enter the radious of the circle : ");
    scanf("%d", &rads);
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");
    setbkcolor(WHITE);
    cleardevice();
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    setcolor(GREEN);
    line(0, midy, 2 * midx, midy);
    line(midx, 0, midx, 2 * midy);
    midpoint_circle(h, k, rads);
    return 0;
}
// Output:-
// Enter the center coordinate of the circle:
// 320 240
// Enter the radious of circle: 90