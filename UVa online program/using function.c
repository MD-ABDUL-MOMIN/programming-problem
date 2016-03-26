#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void U();
void N();
void I();
void C();
int main(void)
{
    int gd=DETECT,gm;
    int i;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    U();delay(10);
    N();delay(10);
    I();delay(10);
    C();delay(10);
    printf("Press any key to exit ");
    getch();
    closegraph();
    return 0;
}
void U()
{
    int i;
    for(i=0;i<100;i++)
    {
        setcolor(2);
        setfillstyle(1,2);
        circle(80,200+i,12);
        floodfill(80,200+i,2);
        delay(5);
        setcolor(4);
        setfillstyle(1,4);
        circle(80,200+i,12);
        floodfill(80,200+i,4);
    }
    for(i=0;i<100;i++)
    {
        setcolor(2);
        setfillstyle(1,2);
        circle(80+i,300,12);
        floodfill(80+i,300,4);
    }
    for(i=0;i<100;i++)
    {
        setcolor(2);
        setfillstyle(1,4);
        circle(160,300-i,12)
    }
    }
}
