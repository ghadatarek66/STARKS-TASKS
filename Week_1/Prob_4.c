#include <stdio.h>
void main(){
	int x,y;
	printf("enter the value of x , y : ");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("num1 is %d and num2 is %d \n",x,y);
	printf("the %d+%d = %d\n ",x,y,x+y);
	printf("the %d*%d = %d\n",x,y,x*y);
	printf("the %d-%d = %d\n",x,y,x-y);
	printf("the %d/%d = %f\n",x,y,(float)x/y);	
}
------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------
//another code for num_4
/* #include <stdio.h>
void main(){
	int x,y,Sum,Mul,Sub;
	float Div;
	printf("enter the value of x , y : ");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("num1 is %d and num2 is %d ",x,y);
	 Sum = x+y;
	 printf("\n x+y = %d",Sum);
	 Mul = x*y;
	 printf("\n x*y = %d",Mul);
	 Sub = x-y;
	 printf("\n x-y = %d",Sub);
	 Div =(float) x/y;
	printf("\n x/y = %f",Div);
}*/
