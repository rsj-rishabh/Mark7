#include<iostream>
#include<graphics.h>
using namespace std;

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	setcolor(YELLOW);
	circle(200, 200, 100);
	floodfill(RED);
	getch();
	closegraph();
return 0;
}
