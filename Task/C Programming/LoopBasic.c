#include<stdio.h>
int main()
{
	int i,num,sum=0,add=0,count=0,j=0;
	printf("\nEnter the Upper Limit: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(i%2!=0)
		{
			count++;
			sum+=i;
		}
		else
		{
			j++;
			add+=i;
		}
	}
	printf("\nSum of Odd numbers is %d",sum);
	printf("\nTotal odd numbers are: %d",count);
	
	printf("\nSum of Even numbers is %d",add);
	printf("\nTotal even numbers are: %d",count);
}
