//Add all array elements
#include<stdio.h>
int main()
{
	int sum=0,num,i;
	printf("\nEnter number of elements: ");
	scanf("%d",&num);
	int arr[num];
	
	for(i=0;i<num;i++)
	{
		printf("\nEnter %dth element: ",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Sum of all the elements is %d.",sum);
}
