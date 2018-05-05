#include<iostream>
#include<graphics.h>
using namespace std;

void plotPoints(int x, int y, int xc, int yc){
	putpixel(xc+x, yc+y, WHITE);
	putpixel(xc-x, yc+y, WHITE);
	putpixel(xc+x, yc-y, WHITE);
	putpixel(xc-x, yc-y, WHITE);
	putpixel(xc+y, yc+x, WHITE);
	putpixel(xc-y, yc+x, WHITE);
	putpixel(xc+y, yc-x, WHITE);
	putpixel(xc-y, yc-x, WHITE);
}

void midCircle(int x, int y, int r){
	int x1=0, y1=r, p=1-r;
	while(x1<=y1){
		plotPoints(x1, y1, x, y);
		if(p<0){
			x1+=1;
			p=p+(2*x1)+1;
		} else{
			x1+=1;
			y1-=1;
			p=p+(2*x1)+1-(2*y1);
		}
		delay(30);
	}
}

int main(){
    int gd=DETECT, gm;
    int x, y, r;
    cout<<"Enter center points (x,y)\n";
    cin>>x>>y;
    cout<<"Enter radius\n";
    cin>>r;
    initgraph(&gd, &gm, NULL);
    midCircle(x, y, r);
    //setcolor(YELLOW);
    //circle(x, y, r);
    getch();
    closegraph();
    
return 0;
}
