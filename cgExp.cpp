#include<iostream>
#include<graphics.h>
using namespace std;

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	int i, j, k;
	for(k=0; k<=10; k++){
	//int k=1;
		for(j=0; j<=359; j++){
			setcolor(YELLOW);
			sector(200, 200, 0, j, 100, 100);
			if(k%2 == 0){
				floodfill(200, 200, YELLOW);
			} else{
				floodfill(200, 200, RED);
			}
			delay(10);
			/*if(j==360){
				j=0;
				k++;
			}*/
		}
		/*if(i==400){
			i=0;
		}*/
	}
	getch();
	closegraph();
return 0;
}
