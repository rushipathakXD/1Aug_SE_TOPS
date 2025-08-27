//Wap to count number of digits, sum of all digits, multiplication of digits, even or odd digits

#include<stdio.h>
int main()
{
	int num,rem,count=0,sum=0,mul=1;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	//separating the digits
	while(num!=0)
	{
		rem = num%10;
		num = num/10;
		count++;
		sum=sum+rem;
		mul=mul*rem;
		
		if(rem%2==0)
		{
			printf("\n%d is even number.",rem);
		}
		if(rem%2!=0)
		{
			printf("\n%d is odd number.",rem);
		}
	}
	printf("\nTotal digits are %d",count);
	printf("\nSum of all digits is: %d",sum);
	printf("\nMultiplication of all digits is: %d",mul);
}
