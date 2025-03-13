#include <stdio.h>
#include <stdlib.h>
#include "file.h"


int main(){
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	int r= SUM(x,y);
	int u= SUB(x,y);
	int w= MUL(x,y);
	int p= DIV(x,y);
	printf("Sum of two numbers is %d",r);
	printf("\nSubtraction  of two numbers is %d",u);
	printf("\nMultiple of two numbers is %d",w);
	printf("\nDivision of two numbers is %d", p);
    return 0;	
}

