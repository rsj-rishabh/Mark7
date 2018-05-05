#include<iostream>
#include<graphics.h>
using namespace std;

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	setcolor(YELLOW);
	ellipse(200, 200, 0, 360, 100, 200);
	//floodfill(RED);
	getch();
	closegraph();
return 0;
}
