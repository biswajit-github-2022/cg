#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
void dda_line(int x1, int y1, int x2, int y2, int midx, int midy)
{
    float xi, yi, x, y, l, dx, dy, m;
    dx = x2 - x1;
    dy = y2 - y1;
    m = dy / dx;
    if (abs(dx) > abs(dy))
        l = dx;
    else
        l = dy;
    xi = dx / l;
    yi = dy / l;
    x = x1;
    y = y1;
    putpixel(midx + x, midy + y, BLACK);
    for (int i = 1; i <= l; i++)
    {
        if (m == 1)
        {
            x += xi + .5;
            y += yi + .5;
        }
        else if (m > 1)
        {
            x += 1 / m;
            y++;
        }
        else
        {
            x++;
            y += m;
        }
        putpixel(x + midx, y + midy, RED);
    }
    getch();
}
int main()
{
    int x1, y1, x2, y2, midx, midy, gd = DETECT, gm;
    printf("Enter the first two coordinates : ");
    scanf("%d%d", &x1, &y1);
    printf("Enter the second two coordinates : ");
    scanf("%d%d", &x2, &y2);
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");
    setbkcolor(WHITE);
    cleardevice();
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    setcolor(GREEN);
    line(0, midy, 2 * midx, midy);
    line(midx, 0, midx, 2 * midy);
    dda_line(x1, y1, x2, y2, midx, midy);
    return 0;
}
// Output:-
// Enter the first two coordinates : 0 0
// Enter the second two coordinates : 60 60
