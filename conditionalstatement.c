#include<stdio.h>
main()
{
	printf("pick an item : \n1. pizza,Rs239\n2. burger,Rs129\n3. pasta,Rs179\n4. french fries,Rs99\n5. sandwitch,Rs149,");
	
	int choice=0;
	scanf("%d,&choice");
	
	switch(choice)
	{
		case 1:
			printf("you picked pizza,Rs239.");
			break;
		case2:
			printf("you picked burger,Rs129.");
			break;
		case3:
			printf("you picked pasta,Rs179.");
			break;
		case4:
			printf("you picked frenchfries,Rs99.");
			break;
		case5:
		  printf("you picked sandwitch,Rs149.");
		  break;
		default : printf("invalid choice");
	}
}
