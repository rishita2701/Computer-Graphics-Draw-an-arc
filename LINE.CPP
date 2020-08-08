#include <graphics.h>
#include <conio.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");

    line(150, 250, 80, 250);
    line(100,200,88,88);
	       getch();
	closegraph();
}

