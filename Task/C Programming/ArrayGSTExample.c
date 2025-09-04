//Array Example
#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("\nEnter number of bills: ");
	scanf("%d",&num);
	int arr[num];
	
	for(i=0;i<num;i++)
	{
		printf("\nEnter item price: ");
		scanf("%d",&arr[i]);
		
		sum = sum+arr[i];
	}
	printf("\nTotal of all Items is: %d",sum);
	
	//GST of 18% is to be added to the total
	float GST,net_bill;
	GST = (sum*18)/100;
	net_bill = GST+sum;
	printf("\nThe GST applied on the total is: %f",GST);
	printf("\nThe total after applying GST is: %f",net_bill);
}
