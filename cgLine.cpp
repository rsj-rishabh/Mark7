#include<iostream>
#include<graphics.h>
using namespace std;

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	line(100, 200, 300, 400);
	getch();
	closegraph();
return 0;
}
