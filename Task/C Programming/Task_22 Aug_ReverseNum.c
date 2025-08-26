//WAP to reverse the number entered by the user

#include<stdio.h>
int main()
{
	int num,rem;
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		printf("%d",rem);
	}
}
