#include <stdio.h>
void main(void){
	float x,y,G;
	printf("enter the value of x , y : ");
	scanf("%f %f",&x,&y);
	printf("the first num is %f and the second is %f\n",x,y);
	G=x;
	x=y;
	y=G;
	printf("After Swapped, the values:\n");
	printf("the first num is %f and the second is %f",x,y);
}