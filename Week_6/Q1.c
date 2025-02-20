//Q_1
#include<stdio.h>
#include"STD_types.h"
typedef struct Employee{
	u16 salary;
	u16 bonus; 
	u16 deduction;
	u32 sum;
}st_employees;
st_employees s1;
st_employees s2;
st_employees s3;
int main(){
	printf("please enter Ahmed Salary: ");
	scanf("%d",&s1.salary);
	printf("please enter Ahmed bonus: ");
	scanf("%d",&s1.bonus);
	printf("please enter Ahmed deduction: ");
	scanf("%d",&s1.deduction);
	printf("please enter Amr Salary: ");
	scanf("%d",&s2.salary);
	printf("please enter Amr bonus: ");
	scanf("%d",&s2.bonus);
	printf("please enter Amr deduction: ");
	scanf("%d",&s2.deduction);
	printf("please enter waleed Salary: ");
	scanf("%d",&s3.salary);
	printf("please enter waleed bonus: ");
	scanf("%d",&s3.bonus);
	printf("please enter waleed deduction: ");
	scanf("%d",&s3.deduction);
	u32 sum=s1.salary + s1.bonus -s1.deduction + s2.salary + s2.bonus -s2.deduction + s3.salary + s3.bonus -s1.deduction;
	printf("Total value needed is %d",sum);
}