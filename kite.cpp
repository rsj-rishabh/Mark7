#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void man(){
	ellipse(65, 335, 0, 360, 15, 18);
	line(65, 375, 90, 365);
	line(65, 375, 90, 367);
	line(65, 355, 65, 400);
	line(50, 430, 65, 400);
	line(65, 400, 80, 430);
	line(0, 430, 639, 430);
}

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, NULL);
	int i, r;
	for(i=320; i>100; i--){
		r = rand()%50+1;
		line(500+r, i+r, 470+r, i-30+r);
		line(500+r, i+r, 530+r, i-30+r);
		line(470+r, i+r-30, 500+r, i-60+r);
		line(530+r, i+r-30, 500+r, i-60+r);
		
		line(500+r, i+r, 485+r, i+10+r);
		line(500+r, i+r, 515+r, i+10+r);
		line(485+r, i+10+r, 515+r, i+10+r);
		line(90, 365, 500+r, i+r);
		
		man();
		
		delay(100);
		if(i>101){
			cleardevice();
		}
	}
	getch();
	closegraph();
return 0;
}
