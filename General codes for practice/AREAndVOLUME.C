#include <stdio.h>
int main(){
	float r,h,a,vol,pi=3.14;
	printf("**this program is used to find the area of the circle**");
	printf("\n enter radius:"); scanf("%f",&r);
	a= r*r*pi;
	printf("\n \t area of circle = %.2f sq.units",a);
	printf("\n for volume of cylinder, enter the height:"); scanf("%f",&h);
	vol = h*a;
	printf("\n \t volume of cylinder = %.2f ",vol); 
	
	
	
	return 0;
}