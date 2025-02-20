#include <stdio.h>
void main(){
	char x,y,w;
	printf("enter the value of x : ");
	scanf("%c",&x);
	printf("the character is %c",x);
	printf("\n the ASCII code of %c is %d",x,x);
	y=x+1;
	w=x-1;
	printf("\n the previous character is %c and the next is %c",w,y);
}