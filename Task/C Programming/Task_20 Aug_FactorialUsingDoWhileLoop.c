//Factorial using do-while loop
#include<stdio.h>
int main()
	{
		int i=1,num,fact=1;
		printf("Enter a number: ");
		scanf("%d",&num);
		
		do{
			fact=fact*i;
			i++;
		}while(i<=num);
		printf("The Factorial of %d is %d",num,fact);
	}
