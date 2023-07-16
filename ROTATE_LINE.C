#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
void rotation_mid(int theta, int fi, int r)
{
    float x, y, t, f, x1, y1, midx, midy;
    t = (3.142857 * theta) / 180;
    f = (3.142857 * fi) / 180;
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    x = r * cos(t);
    y = r * sin(t);
    setcolor(GREEN);
    line(midx, midy, midx + x, midy - y);
    x1 = (x * cos(f) - y * sin(f));
    y1 = (x * sin(f) + y * cos(f));
    setcolor(RED);
    line(midx, midy, midx + x1, midy - y1);
    getch();
}
int main()
{
    int t, f, r, gd = DETECT, gm;
    printf("Enter the length of the straightline : ");
    scanf("%d", &r);
    printf("Enter the initial and final rotation angle : \n");
    scanf("%d%d", &t, &f);
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLUE);
    line(0, 240, 640, 240);
    line(320, 0, 320, 480);
    rotation_mid(t, f, r);
    return 0;
}

// Output:-
// Enter the length of the straightline : 100
// Enter the initial and final rotation angle :
// 45 90