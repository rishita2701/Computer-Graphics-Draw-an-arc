#include <graphics.h>
#include <conio.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");

	circle(250, 200, 50);
	circle(100, 100, 10);
	getch();
	closegraph();
}
