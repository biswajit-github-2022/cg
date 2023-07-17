#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
void bresenham_circle(int h, int k, int r)
{
    int d, x, y;
    d = (3 - 2 * r);
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
            d += 4 * x + 6;
        }
        else
        {
            x++;
            y--;
            d += 4 * x - 4 * y + 10;
        }
    }
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
    bresenham_circle(h, k, rads);
    bresenham_circle(h + 2 * rads, k, rads);
    bresenham_circle(h + rads, k - (.25 + sqrt(2)) * rads, rads);
    getch();
    return 0;
}
// Output:-
// Enter the center coordinate of the circle:
// 320 240
// Enter the radious of circle: 60