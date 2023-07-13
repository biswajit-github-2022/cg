#include <graphics.h> 
#include <conio.h> 
#include <stdio.h> 
void flood(int x, int y, int new_col, int old_col) { 
if (getpixel(x, y) == old_col) { 
putpixel(x, y, new_col); 
flood(x + 1, y, new_col, old_col); 
flood(x - 1, y, new_col, old_col); 
flood(x, y + 1, new_col, old_col); 
flood(x, y - 1, new_col, old_col); 
} 
} 
int main() { 
int gd, gm = DETECT; 
initgraph(&gd, &gm, "C:\\Turboc3\\bgi"); 
int top, left, bottom, right; 
top = left = 50; 
bottom = right = 300; 
rectangle(left, top, right, bottom); 
line(50, 300, 300, 50); 
int x = 51; 
int y = 51; 
int newcolor = 12; 
int oldcolor = 0; 
flood(51, 51, BLUE, oldcolor); 
flood(290, 290, RED, oldcolor); 
return 0; 
}#include <graphics.h> 
#include <conio.h> 
#include <stdio.h> 
void flood(int x, int y, int new_col, int old_col) { 
if (getpixel(x, y) == old_col) { 
putpixel(x, y, new_col); 
flood(x + 1, y, new_col, old_col); 
flood(x - 1, y, new_col, old_col); 
flood(x, y + 1, new_col, old_col); 
flood(x, y - 1, new_col, old_col); 
} 
} 
int main() { 
int gd, gm = DETECT; 
initgraph(&gd, &gm, "C:\\Turboc3\\bgi"); 
int top, left, bottom, right; 
top = left = 50; 
bottom = right = 300; 
rectangle(left, top, right, bottom); 
line(50, 300, 300, 50); 
int x = 51; 
int y = 51; 
int newcolor = 12; 
int oldcolor = 0; 
flood(51, 51, BLUE, oldcolor); 
flood(290, 290, RED, oldcolor); 
return 0; 
}