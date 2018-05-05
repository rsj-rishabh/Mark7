#include<iostream>
#include<graphics.h>
using namespace std;

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	setcolor(YELLOW);
	arc(200, 200, 75, 180, 100);
	getch();
	closegraph();
return 0;
}
