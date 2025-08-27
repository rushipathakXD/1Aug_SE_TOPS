// Menu driven program for a simple calculator

#include<stdio.h>
int main()
{
	char choice;
	int num1,num2,ans;
	
	printf("\n 1. Addition(+) \n 2. Subtraction(-) \n 3. Multiplication(*) \n 4. Division(/) \n 5. Exit(&)");
	printf("\nEnter a valid choice: ");
	scanf("%c",&choice);
	
	
	//condition for menu selections
	if (choice == '&')
	{
		printf("Loop exit");
		return 0;
	}
	
	if(choice !='+' && choice!='-' && choice!='*' && choice!='/' && choice!='&')
	{
		printf("Enter a valid input('+','-','*','/')");
		return 0;
	}
	
	printf("\nEnter number 1: ");
	scanf("%d",&num1);
	printf("\nEnter number 2: ");
	scanf("%d",&num2);
	
	switch(choice)
	{
		case '+' : ans=num1+num2;
				printf("Addition of %d and %d is %d.",num1,num2,ans);
				break;
				
		case '-' : ans=num1-num2;
				 printf("Subtraction of %d and %d is %d.",num1,num2,ans);
				 break;
		
		case '*' : ans = num1*num2;
				 printf("Multiplication of %d and %d is %d.",num1,num2,ans);
				 break;
				 
		case '/' : ans = num1/num2;
				 printf("Division of %d and %d is %d.",num1,num2,ans);
				 break;
	
		default : printf("Enter a valid input('+','-','*','/')");	
	}
}
