#include <graphics.h>
#include<conio.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");

	putpixel(25, 35,WHITE);
	putpixel(30, 10,YELLOW);
	putpixel(250,100,WHITE);
	getch();
	closegraph();
}
