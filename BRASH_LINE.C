#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void bresenham_line(int x1, int y1, int x2, int y2, int midx, int midy)
{
    int dx, dy, p, x, y;
    dx = x2 - x1;
    dy = y2 - y1;
    p = 2 * dy - dx;
    x = x1;
    y = y1;
    putpixel(x + midx, y + midy, BLACK);
    while (x < x2)
    {
        if (p < 0)
        {
            x++;
            p += 2 * dy;
        }
        else
        {
            x++;
            y++;
            p += 2 * dy - 2 * dx;
        }
        putpixel(x + midx, y + midy, RED);
    }
    getch();
}
int main()
{
    int x1, y1, x2, y2, midx, midy, gd = DETECT, gm;
    printf("Enter first two co-ordinates: \n");
    scanf("%d%d", &x1, &y1);
    printf("Enter second two co-ordinates: \n");
    scanf("%d%d", &x2, &y2);
    initgraph(&gd, &gm, "c:\\Turboc3\\bgi");
    setbkcolor(WHITE);
    cleardevice();
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    setcolor(GREEN);
    line(0, midy, 2 * midx, midy);
    line(midx, 0, midx, 2 * midy);
    bresenham_line(x1, y1, x2, y2, midx, midy);
    return 0;
}
// Output:-
// Enter the first two coordinates :
// 0 0
// Enter the second two coordinates :
// 60 60
