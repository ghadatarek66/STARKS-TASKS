#include <stdio.h>
#include <stdlib.h>
#define  SIZE_ARR    6

int main(){
	int y[SIZE_ARR]={2,3,5,9,5,3};
    int sum=0;
	for(int i=0;i< SIZE_ARR;i++){
		sum+=y[i];
	}
	printf("The sum of an element of array is: %d",sum);
	
}
//************************************************************************//
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  SIZE_ARR    6

int main(){
	int y[SIZE_ARR];
    int sum=0;
	printf("Enter the array: ");
	
	for(int i=0;i< SIZE_ARR;i++){
		scanf("%d",&y[i]);
		sum+=y[i];
	}
	printf("The sum of an element of array is: %d",sum);
	
}*/