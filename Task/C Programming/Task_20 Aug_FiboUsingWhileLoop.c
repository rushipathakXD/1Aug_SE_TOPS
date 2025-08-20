//Fibonacci series using while loop
#include<stdio.h>
int main()
{
	int num,i=0,next=1,pre=0,sum;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		if(i==0)
		{
			sum=0;
		}
		else
		{
			pre=next;
			next=sum;
			sum=pre+next;
		}
		i++;
		printf("%d\t",sum);
	}
}
