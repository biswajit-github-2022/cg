#include <graphics.h>
#include <conio.h>
       void
       boundaryFill8(int x, int y, int fill_color, int boundary_color)
{
    if (getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill8(x + 1, y, fill_color, boundary_color);
        boundaryFill8(x, y + 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y, fill_color, boundary_color);
        boundaryFill8(x, y - 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y - 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y + 1, fill_color, boundary_color);
        boundaryFill8(x + 1, y - 1, fill_color, boundary_color);
        boundaryFill8(x + 1, y + 1, fill_color, boundary_color);
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(6);
    rectangle(50, 50, 200, 200);
    boundaryFill8(55, 55, 2, 6);
    getch();
    closegraph();
    return 0;
}