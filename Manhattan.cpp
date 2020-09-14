#include <stdio.h>
int main()
{
	int x1,x2,y1,y2,xtot,ytot,jarak;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	
	if (x1>x2){
	xtot = x1-x2;
	}
	else if (x1<x2){
	xtot = x2-x1;
	}
	else xtot = 0;
	
	if (y1>y2){
	ytot = y1-y2;
	}
	else if (y1<y2){
	ytot = y2-y1;
	}
	else ytot = 0;
	
	jarak = xtot + ytot;
	printf ("%d\n",jarak);
	return 0;
}
