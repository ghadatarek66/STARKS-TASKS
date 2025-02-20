//Task_2 
//question_2
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
#include<stdio.h>
void main(){
	int id=66666;
	int password=12345;
	int ID,Password;
	printf("enter your ID ");
	scanf("%d",&ID);
	printf("enter the password ");
	scanf("%d",&Password);
	if(ID == id){
		for(int i=0;i<3;i++){
			printf("enter your password : ");
	        scanf("%d",&Password);
		}
		if (Password == password){
			printf("\n welcome");
		}else {
			printf("no more tries");
		}
	} else 
		printf("you aren't registered");
}