#include<iostream>
#include<graphics.h>
using namespace std;

int sign(int x){
	if(x<0)
		return -1;
	if(x>0)
		return 1;
	if(x==0)
		return 0;
}

void bgline(int xi, int yi, int xf, int yf){
	int dx = xf-xi, dy = yf-yi, i=1, ex=0;
	int s1 = sign(xf-xi), s2 = sign(yf-yi);
	int e = 2*dy - dx;
	if(dy>dx)
		ex = 1;
	for(; i<=dx; i++){
		putpixel(xi, yi, WHITE);
		while(e>=0){
			if(ex==1)
				xi+=s1;
			else
				yi+=s2;
			e = e-2*dx;
		}
		if(ex=1)
			yi+=s2;
		else
			xi+=s1;
		e = e+2*dy;
		delay(5);
	}
}

int main(){
    int gd=DETECT, gm;
    int xi, yi, xf, yf;
    cout<<"Enter initial points (x,y)\n";
    cin>>xi>>yi;
    cout<<"Enter final points (x,y)\n";
    cin>>xf>>yf;
    initgraph(&gd, &gm, NULL);
    bgline(xi, yi, xf, yf);
    getch();
    closegraph();
    
return 0;
}
