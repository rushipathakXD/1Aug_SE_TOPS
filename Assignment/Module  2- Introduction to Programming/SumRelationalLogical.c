/*Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results.*/

#include<stdio.h>
int main()
{
	int num1,num2,sum=0;
	
	printf("Enter 1st Number: ");
	scanf("%d",&num1);
	
	printf("Enter 2nd Number: ");
	scanf("%d",&num2);
	
	//Arithmetic
	sum = num1+num2;
	printf("\nThe sum of %d and %d is %d.",num1,num2,sum);
	
	//relational
	if(num1==num2)
	{
		printf("\nBoth the numbers are same.");
	}
	else
	{
		printf("\nBoth numbers are different.");
	}
	
	//logical
	if(num1>0 && num2>0)
	{
		printf("\nBoth numbers are greater than 0.");
	}
	else
	{
		printf("\nEither of the number is 0.");
	}
}
