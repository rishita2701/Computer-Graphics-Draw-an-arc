#include <graphics.h>
#include<conio.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");

    line(100,200,300,100);
    line(300,100,300,300);
    line(300,300,100,200);
		 getch();
    closegraph();
}
