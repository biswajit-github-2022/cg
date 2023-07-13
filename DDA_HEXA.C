#include <stdio.h> 
#include <conio.h> 
#include <graphics.h> 
#include <math.h> 
#include <dos.h> 
void dda(int x1, int y1, int x2, int y2) { 
int dx, dy, l, i; 
float x, y, xi, yi, rx, ry; 
dx = x2 - x1; 
dy = y2 - y1; 
if (abs(dx) > abs(dy)) { 
l = abs(dx); 
} else { 
l = abs(dy); 
} 
xi = dx / (float)l; 
yi = dy / (float)l; 
x = x1; 
y = y1; 
putpixel(x, y, GREEN); 
for (i = 0; i < l; i++) { 
x = x + xi; 
y = y + yi; 
rx = x + 0.5; 
ry = y + 0.5; 
putpixel(rx, ry, GREEN); 
delay(10); 
} 
getch(); 
} 
int main() { 
int gd = DETECT, gm, midx, midy, x1, y1, x2, y2; 
initgraph(&gd, &gm, "C:\\Turboc3\\bgi"); 
midx = getmaxx() / 2; 
midy = getmaxy() / 2; 
setcolor(RED); 
line(midx, 0, midx, 2 * midy); 
 17
setcolor(RED); 
line(0, midy, 2 * midx, midy); 
void dda(int, int, int, int); 
dda(150, 100, 100, 200); 
dda(100, 200, 150, 300); 
dda(150, 300, 350, 300); 
dda(350, 300, 400, 200); 
dda(400, 200, 350, 100); 
dda(350, 100, 150, 100); 
closegraph(); 
return 0; 
} 