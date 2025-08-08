//WAP to add 100 to 5 different variables and print the answers
#include<stdio.h>
int main(){
	/* 	Declaring and initialising variables
		num1, num2...,num5 and sum1, sum2,...,sum5
	*/
	int num1, num2, num3, num4, num5;
	int sum1, sum2, sum3, sum4, sum5;
	
	num1=100;
	num2=200;
	num3=300;
	num4=400;
	num5=500;
	
	sum1= num1 + 100;
	sum2= num2 + 100;
	sum3= num3 + 100;
	sum4= num4 + 100;
	sum5= num5 + 100;
	
	// printing all the answers
	printf("%d", sum1);
	printf("\n%d", sum2);
	printf("\n%d", sum3);
	printf("\n%d", sum4);
	printf("\n%d", sum5);
}
