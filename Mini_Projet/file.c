  #include<stdio.h>
  #include <string.h>
  #define USERS 4
  #define MEALS 4
  #define HOTDRINKS 2
  #define COLDDRINKS 2
  #define FLAVORS 3
  void useSubscriberCard(float *balance, int price) {
    if (*balance >= price) {
        *balance -= price;
        printf("Payment successful! Remaining balance: %.2f\n", *balance);
    } else {
        printf("Insufficient balance! Please pay with cash.\n");
    }
  }
  void processPayment(char userType[], float *balance,int price){
	  if(strcmp(userType,"guest")==0){
		  printf("you have only one payment option : Cash");
	  } 
	  else if(strcmp(userType,"subscriber")==0)
	  {
        /*printf("Enter the amount to pay: ");
         scanf("%f", &price);*/
         useSubscriberCard(balance, price);		
	  }
  } 
  typedef struct {
	  char Name[30];
	  int price;
  } Flavor;
    Flavor flavors[FLAVORS]={
		{"mint",10},
		{"strawberry",20},
		{"vanilla",20}
	};
  void addFlavor(){
	   char flavor[20];
	  printf(" hot drinks with flavors drinks list");
			   for(int i=0;i<FLAVORS;i++){  
			   printf("\n %s - %dL.E",flavors[i].Name,flavors[i].price);}  
	    printf("\n Enter the flavor you choose: ");
		   scanf("%s",&flavor);
		   printf("you choose hot drink with %s",flavor);
	   }
	typedef struct {
	  char Name[30];
	  int price;
  } Hot;
    Hot hotdrinks[HOTDRINKS]={
		{"Tea",15},	
		{"Coffee",20}
	};		
     typedef struct {
	  char Name[30];
	  int price;
  } Cold;
    Cold colddrinks[COLDDRINKS]={
		{"cola",15},	
		{"miranda",20}
	};	
   typedef struct {
	  char Name[30];
	  int price;
  } Meal;
    Meal meals[MEALS]={
		{"molto",15},	
		{"biscuits",10},	
		{"Croissants",20},	
		{"Dounts",25}
	}; 	
   void showMenu(char userType[],float *balance){
	 char snack[30];
	  char t[10];
	  int price =0;
	  printf("what do you need (snack/drink): ");
	  scanf("%s",&t);
	  if(strcmp(t,"snack")==0){
		    printf(" snack list");
			   for(int i=0;i<MEALS;i++){  
			   printf("\n %s - %dL.E", meals[i].Name, meals[i].price);}  
	  printf("\nEnter snacks you choose: ");
	  scanf("%s",&snack);
	   for (int i = 0; i < MEALS; i++) {
            if (strcmp(meals[i].Name, snack) == 0) {
                price = meals[i].price;
                break;
            }
        }
	  } char Drink[20];
	  if(strcmp(t,"drink")==0)
		  {
		  printf("hot or cold drink? : ");
		  scanf("%s",&t);
		  if(strcmp(t,"hot")==0){
			printf(" hot drinks list");
			   for(int i=0;i<HOTDRINKS;i++){  
			   printf("\n %s - %dL.E",hotdrinks[i].Name,hotdrinks[i].price);}  
	  printf("Enter hot drink you choose: ");
	  scanf("%s",&Drink);
	  for (int i = 0; i < HOTDRINKS; i++) {
                if (strcmp(hotdrinks[i].Name, Drink) == 0) {
                    price = hotdrinks[i].price;
                    break;
                }
            }
	 addFlavor();
		  }
		   if(strcmp(t,"cold")==0){
			   printf(" cold drinks list");
			   for(int i=0;i<COLDDRINKS;i++){  
			   printf("\n %s - %dL.E",colddrinks[i].Name,colddrinks[i].price);}  
	 printf("\nEnter cold drink you choose: ");
	  scanf("%s",&Drink);
	   for (int i = 0; i < COLDDRINKS; i++) {
                if (strcmp(colddrinks[i].Name, Drink) == 0) {
                    price = colddrinks[i].price;
                    break;
                }
            }
		  }	  
		  }processPayment(userType,balance, price);
	  }
	 typedef struct {
	  char name[20];
	  int Password;
  } Subscriber;
     Subscriber subscribers[USERS]={
		 {"ahmed",3333},
		 {"ali",8888},
		 {"aml",6655}
	 }; int isValidSubscriber( char name[20],int Password ){
		for(int i=0; i< USERS;i++){
			if(strcmp(subscribers[i].name,name)==0 && subscribers[i].Password==Password){
				return 1;
			}
		} return 0;
	}
	int mealCount=4;
	void addMeal(){
		if(mealCount >= MEALS){
			printf("Meal List is full");
			return;
		} printf("Enter new meal name:");
		scanf("%s",meals[mealCount].Name);
		printf("Enter new meal price:");
		scanf("%s",&meals[mealCount].price);
		mealCount++;
		printf("Meal added successfully\n");
	}
  void removeMeal(){
	  char name[30];
	printf("Enter  meal name you remove:"); 
    scanf("%s",name);
	for(int i=0; i<mealCount;i++){
		if (strcmp(meals[i].Name, name) == 0) {
            for (int j = i; j < mealCount - 1; j++) {
                meals[j] = meals[j + 1];
            }
            mealCount--;
            printf("Meal removed successfully!\n");
            return;
        }
    }
  }	
  int userCount= 3;
  void addUser(){
	  if( userCount >= USERS){
			printf("user List is full");
			return;
		} printf("Enter new user name:");
		scanf("%s",subscribers[userCount].name);
		printf("Enter new user name password:");
		scanf("%s",&subscribers[userCount].Password);
		userCount++;
		printf("User added successfully\n");
	  
  }
  void removeUser(){
	  char name[30];
	printf("Enter  user name you remove:"); 
    scanf("%s",name);
	for(int i=0; i<userCount;i++){
		if (strcmp(subscribers[i].name, name) == 0) {
            for (int j = i; j < userCount - 1; j++) {
                subscribers[j] = subscribers[j + 1];
            }
            userCount--;
            printf("user removed successfully!\n");
            return;
        }
    }
  }	
  void userList(){
	   printf("\nList of Subscribers:\n");
    for (int i = 0; i < userCount; i++) {
        printf("%d. %s\n", i + 1, subscribers[i].name);
    }
}
  void ShowMenu(){
	   printf("\nMenu:\n");
    for (int i = 0; i < mealCount; i++) {
        printf("%d. %s - %d L.E\n", i + 1, meals[i].Name, meals[i].price);
    }
	for (int i = 0; i < COLDDRINKS; i++) {
        printf("%s - %d L.E\n",colddrinks[i].Name, colddrinks[i].price);
	}
	for (int i = 0; i < HOTDRINKS; i++) {
        printf(" %s - %d L.E\n", hotdrinks[i].Name, hotdrinks[i].price);
    }
	 for (int i = 0; i < FLAVORS; i++) {
        printf("%s - %d L.E\n", flavors[i].Name, flavors[i].price);
    }
  }
	 
  void Login(){
	  char mode[20],userType[20],Name[20];
	  int Password;
	 char name[20]="ghada";
	 int password=5566;
	 float balance = 100.0; 
	  while(1){
	   printf("log in your mode(admin/user): "); // admin mode or user mode 
	   scanf("%s",&mode);
	   if(strcmp(mode,"admin")==0){
		   printf("enter your name and password: ");	
	   scanf("%s  %d",&name,&password);
	   if(strcmp(name,"ghada")==0 && password==5566){
		   printf("The admin is logged in\n");
		    while(1){
		   
		  printf("\n1. Add User\n2. Remove User\n3. User List\n4. Add Meal\n5. Remove Meal\n6. ShowMenu\n7. Logout\n");
    int choice;
	  printf("\nenter choice: ");
	  scanf("%d",&choice);
	  switch (choice){
		  case 1: addUser();break; 
		  case 2: removeUser();break;
		  case 3: userList();break;
		  case 4: addMeal();break;
		  case 5: removeMeal();break;
		  case 6: ShowMenu();break;
		  case 7:return;
		  default: printf("Invalid choice! Try again\n");
		  
	   }
	    break;
	   } 
		   break;
		    
	  } else 
	   printf("Invalid name! please enter a valid name\n");
   break;
	   }	   
	   if(strcmp(mode,"user")==0){
		   printf("enter your user mode(guest/subscriber):  ");
		    scanf("%s",&userType);
			
			if(strcmp(userType,"subscriber")==0){
				printf("enter your name and password: ");	
			scanf("%s  %d",&Name,&Password);
			if(isValidSubscriber( Name,Password)){
				printf("login successful!Welcome %s\n",Name);
			showMenu(userType,&balance);
		}
				else
					printf("Invalid Data user! Please try again\n");
	   } 
			
	   else 
	   showMenu(userType,&balance);
	  break;
	   } else
     printf("Invalid mode! please enter a valid mode\n");          
	  }  
  }

  