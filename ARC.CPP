#include <graphics.h>
#include <conio.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");

    arc(100,100,50,200,20);
    arc(150,200,33,66,90);
getch();
	closegraph();
}
