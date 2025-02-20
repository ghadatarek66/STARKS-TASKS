//Task_2 
//question_4
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
#include<stdio.h>
int main(){
	int A,B,C,V;
	printf("enter the V ");
	scanf("%d",&V);
	printf("enter the A ");
	scanf("%d",&A);
    printf("enter the B ");
	scanf("%d",&B);
	printf("enter the C ");
	scanf("%d",&C);
	for(int i=1;i<=V;i++){
	if(V<A){
		printf("F\n");
		return 0;
	}V=V-A;
	if(V<B){
		printf("M\n");
		return 0;
	} V=V-B;	
   if(V<C){
	   printf("T\n");
	   return 0;
	}V=V-C;
	return 0;
}



}

