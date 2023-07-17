#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>


int ch, x, y, x1, y1;
int translation();
int scaling();

void main() {
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");
    printf("enter point x: ");
    scanf("%d", &x);
    printf("enter point y: ");
    scanf("%d", &y);
    printf("enter point x1: ");
    scanf("%d", &x1);
    printf("enter point y1: ");
    scanf("%d", &y1);
    translation();
    scaling();
    getch();
    closegraph();
}

int translation() {
    int t;
    printf("enter point t: ");
    scanf("%d", &t);
    bar3d(x,y,x1,y1,5,1);
    x = x+t;
    y = y+t;
    x1 = x1+t;
    y1 = y1+t;
    bar3d(x,y,x1,y1,5,1);
    return (0);
}

int scaling() {
    int s;
    printf("enter point s: ");
    scanf("%d", &s);
    bar3d(x,y,x1,y1,5,1);
    x1 = x*s;
    y1 = y*s;
    bar3d(x,y,x1,y1,5,1);
    return (0);
}