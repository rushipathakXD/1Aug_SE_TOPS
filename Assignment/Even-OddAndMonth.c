/*Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).*/

#include<stdio.h>
int main()
{
	int num,month;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("%d is even.",num);
	}
	else
	{
		printf("%d is odd.",num);
	}
	
	printf("\nEnter a month in number(1-12): ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1 : printf("You have selected %d month that is January.",month);
		break;
		
		case 2 : printf("You have selected %d month that is February.",month);
		break;
		
		case 3 : printf("You have selected %d month that is March.",month);
		break;
		
		case 4 : printf("You have selected %d month that is April.",month);
		break;
		
		case 5 : printf("You have selected %d month that is May.",month);
		break;
		
		case 6 : printf("You have selected %d month that is June.",month);
		break;
		
		case 7 : printf("You have selected %d month that is July.",month);
		break;
		
		case 8 : printf("You have selected %d month that is August.",month);
		break;
		
		case 9 : printf("You have selected %d month that is September.",month);
		break;
		
		case 10 : printf("You have selected %d month that is Octoer.",month);
		break;
		
		case 11 : printf("You have selected %d month that is November.",month);
		break;
		
		case 12 : printf("You have selected %d month that is December.",month);
		break;
		
		default : printf("Enter a valid month number!!!!");
	}
}
