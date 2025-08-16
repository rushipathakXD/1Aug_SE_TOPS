//C file for operators' examples: Arithmatic, conditionals, relational, logical, Assignment

#include<stdio.h>
int main()
{
	//declaring and initializing 2 variables
	int a = 100;
	int b= 25;
	
	//accept input from user
	printf("Enter number1: ");
	scanf("%d",&a);
	printf("Enter number2: ");
	scanf("%d",&b);
	
	//arithmatic operators
	printf("\n addition %d",a+b);
	printf("\n subtraction %d",a-b);
	printf("\n multiplication %d",a*b);
	printf("\n division %d",a/b);
	printf("\n mod %d",a%b);
	
	//relational operators
	
	printf("\n a>b = %d ",a>b);
	printf("\n a<b = %d ",a<b);
	printf("\n a>=b = %d ",a>=b);
	printf("\n a<=b = %d ",a<=b);
	printf("\n a!=b = %d ",a!=b);
	
	//logical operators 
	//a>b and a>100
	printf("\n a>b && a>100 = %d",(a>b && a>100));
	printf("\n a>b || a>100 = %d ",(a>b || a>100));
	printf("\n !(a>b && a>100) = %d ",!(a>b && a>100));
	
	//Assignment operators 

	printf("\n a+=100  = %d ",a+=100);
	printf("\n a-=100  = %d ",a-=100);
	printf("\n a*=100  = %d ",a*=100);
	printf("\n a/=100  = %d ",a/=100);
}
