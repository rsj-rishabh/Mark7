#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void man(int x, int y){
	int i;
	line(0, y, getmaxx(), y);
	line(x-25, y, x-10, y-40);
	line(x+10, y-40, x+25, y);
	circle(x, y-70, 30);
	line(x, y-80, x+50, y-110);
	circle(x, y-110, 10);
	circle(x+55, y-110, 5);
}

void kite(int x, int y){
	line(x+55, y-110, x+15, y-160);
	line(x+15, y-160, x+55, y-190);
	line(x+55, y-190, x+95, y-160);
	line(x+95, y-160, x+55, y-110);
}

int fly(int x){
	int y;
	y = 
	return y;
}

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, NULL);
	int x=getmaxx(), y=getmaxy();
	
	int i, cx, cy, py;
	for(i=0; i<225; i++){
		cleardevice();
		man(x/4, y-50);
		line((x/4)+55, y-160, (x/4)+55+i, y-160-i);
		kite((x/4)+i, y-50-i);
		delay(10);
	}
	cx = (x/4)+55;
	cy = y-160;
	i = (x/4)+55+i;
	for(; i<150; i++){
		py = fly(i, cx, cy);
		line((x/4)+55, y-160, i, py);
		kite(i, py);
		delay(20);
	}
	
	getch();
	closegraph();
return 0;
}
