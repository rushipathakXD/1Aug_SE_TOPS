#include<stdio.h>
void freq(int num, int arr[])
{
	int i,j,count,num1;
	
	for(i=0;i<num;i++)
	{
		count=0;
		num1 = arr[i];
		
		for(j=0;j<num;j++)
		{
			if(num1==arr[j])
			{
				count++;
			}
		}
		printf("\n num = %d--->%d",arr[i],count);
	}
}

int main()
{
	int num;
	printf("Enter the number of elements in the Array: ");
	scanf("%d",&num);
	
	int arr1[num],i;
	for(i=0;i<num;i++)
	{
		printf("Enter the %d element: ",i+1);
		scanf("%d",&arr1[i]);
	}
	freq(num,arr1);
}
