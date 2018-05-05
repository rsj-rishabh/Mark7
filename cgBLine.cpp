#include<iostream>
#include<graphics.h>
using namespace std;

void bline(int xi, int yi, int xf, int yf){
	int dx = xf-xi, dy = yf-yi;
	if((dy/dx)<1){
		int p = 2*dy - dx;
		for(; xi!=xf; xi++){
			if(p<0){
				putpixel(xi, yi, WHITE);
				p = p+(2*dy);
			}else{
				yi++;
				putpixel(xi, yi, WHITE);
				p = p+(2*dy)-(2*dx);
			}
			delay(5);
		}
	}else{
		cout<<"Not allowed!";
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
    bline(xi, yi, xf, yf);
    getch();
    closegraph();
    
return 0;
}
