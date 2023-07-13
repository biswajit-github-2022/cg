#include <stdio.h> 
#include <conio.h> 
#include <graphics.h> 
#include <math.h> 
#include <dos.h> 
void mid_ellipse(int xc, int yc, int rx, int ry) { 
float x = 0, y = ry, p; 
float px = 0, py = 2 * rx * rx * y; 
putpixel(xc + x, yc + y, YELLOW); 
putpixel(xc - x, yc + y, YELLOW); 
putpixel(xc + x, yc - y, YELLOW); 
putpixel(xc - x, yc - y, YELLOW); 
// Region 1 
p = ry * ry - (rx * rx * ry) + (.25 * rx * rx); 
while (px < py) { 
x++; 
px += 2 * ry * ry; 
if (p < 0) 
p += ry * ry + px; 
else { 
y--; 
py -= 2 * rx * rx; 
p += ry * ry + px - py; 
} 
putpixel(xc + x, yc + y, YELLOW); 
putpixel(xc - x, yc + y, YELLOW); 
putpixel(xc + x, yc - y, YELLOW); 
putpixel(xc - x, yc - y, YELLOW); 
} 
// Region 2 
p = ry * ry * (x + 0.5) * (x + 0.5) + rx * rx * (y - 1) * (y - 1) - rx * rx * ry * ry; 
while (y > 0) { 
y--; 
py = py - 2 * rx * rx; 
if (p > 0) 
p = p + rx * rx - py; 
else { 
x++; 
 15
px = px + 2 * ry * ry; 
p = p + rx * rx - py + px; 
} 
putpixel(xc + x, yc + y, YELLOW); 
putpixel(xc - x, yc + y, YELLOW); 
putpixel(xc + x, yc - y, YELLOW); 
putpixel(xc - x, yc - y, YELLOW); 
} 
getch(); 
} 
int main() { 
int rx, ry, xc, yc, gd = DETECT, gm; 
printf("Enter the center points of ellipse: "); 
scanf("%d%d", &xc, &yc); 
printf("Enter the x-radious and y-radious coordinate: "); 
scanf("%d%d", &rx, &ry); 
initgraph(&gd, &gm, "C:\\Turboc3\\bgi"); 
mid_ellipse(xc, yc, rx, ry); 
return 0; 
} 
Output:- 
Enter the center points of ellipse: 320 240 
Enter the x-radious and y-radious coordinate: 120 50