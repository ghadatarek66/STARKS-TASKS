  #include<stdio.h>
  #include <string.h>
  void useSubscriberCard(float *balance, float amount) {
    if (*balance >= amount) {
        *balance -= amount;
        printf("Payment successful! Remaining balance: %.2f\n", *balance);
    } else {
        printf("Insufficient balance! Please pay with cash.\n");
    }
  }
  void processPayment(char userType[]){
	   float balance = 50.0; 
    float price;
	  if(strcmp(userType,"guest")==0){
		  printf("you have only one payment option : Cash");
	  } 
	  else if(strcmp(userType,"subscriber")==0)
	  {
		//printf("you have two payment options : Cash \n or subscriber card ");
        printf("Enter the amount to pay: ");
         scanf("%f", &price);
         useSubscriberCard(&balance, price);		
	  }
  }
  
  void chooseFlavor(){
	  char flavor[20];
	  printf("The menu of flavors:\n mint_price:10L.E\n strawberry_price:20L.E\n vanilla_price:15L.E");
	    printf("\n you can add  flavor for (mint/strawberry/vanilla)\n: ");
		   scanf("%s",&flavor);
		   printf("\n you choose hot drink with %s",flavor);
	   }
	  
  
   void showMenu(char userType[]){
	 char snack[30];
	  char t[10];
	  printf("what do you need (snack/drink): ");
	  scanf("%s",&t);
	  if(strcmp(t,"snack")==0){
		  printf("\n The menu contains quick snacks :\n molto - price 15L.E\n biscuits - price 10L.E\n Croissants- price 20L.E\n Donuts - price 25L.E\n");
	  printf("Enter snacks you choose: ");
	  scanf("%s",&snack);
	  } char Drink[20];
	  if(strcmp(t,"drink")==0)
		  {
		  printf("hot or cold drink? : ");
		  scanf("%s",&t);
		  if(strcmp(t,"hot")==0){
	 printf(" \n hot drinks:\n Tea  - price 15L.E\n Coffee  - price 20L.E \n");
	  printf("Enter hot drink you choose: ");
	  scanf("%s",&Drink);
	 chooseFlavor();
		  }
		   if(strcmp(t,"cold")==0){
	 printf(" \n cold drinks: Cola - price 15L.E\n Miranda - price 20L.E");
	 printf("Enter cold drink you choose: ");
	  scanf("%s",&Drink);
		  }	  
		  }processPayment(userType);
	  }
	     
  void Login(){
	  char mode[20],userType[20],Name[20];
	  int t;
	  char name[20]="Ahmed";
	  int Password=5566;
	   printf("log in your mode(admin/user): "); // admin mode or user mode 
	   scanf("%s",&mode);
	   if(strcmp(mode,"user")==0){
		   printf("enter your user mode(guest/subscriber):  ");//guest , subscriber
		    scanf("%s",&userType);
			if(strcmp(userType,"subscriber")==0){
				printf("enter your name and password: ");	
			scanf("%s  %d",&Name,&t);
				
	   }  showMenu(userType);
	   }
	  else if(strcmp(mode,"admin")==0) {
		   printf("The admin is logged in\n");
		   printf("The menu contains quick snacks :\n molto - price 15L.E\n biscuits - price 10L.E\n Croissants- price 20L.E\n Donuts - price 25L.E\n and also contains hot drinks:\n Tea  - price 15L.E\n Coffee  - price 20L.E \n with flavor: mint_price:10L.E\n strawberry_price:20L.E\n vanilla_price:15L.E\n");
		   printf("it contains cold drinks: Cola - price 15L.E\n Miranda - price 20L.E ");
	   } else 
		   printf("Invalid mode!");  
	   }   
  
  
  