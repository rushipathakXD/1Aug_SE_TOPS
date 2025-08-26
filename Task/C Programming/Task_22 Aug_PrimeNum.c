//WAP to find if a number is prime number or not
#include<stdio.h>
int main()
{
	int i,num,count=0,result;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("0 is not a prime number.");
		return 0;
	}
	
	for(i=1;i<=num;i++)
	{
		result=num%i;
		if(result==0)
		{
			count++;
		}
	}
	if(count<=2)
	{
		printf("%d is a prime number.",num);
	}
	else if(count>2)
	{
		printf("%d is not a prime number.",num);
	}
}
