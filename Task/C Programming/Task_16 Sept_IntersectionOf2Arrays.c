#include<stdio.h>
int intersect(int arr1[5], int arr2[5])
{
	int ans[5],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr1[i]==arr2[j])
			{
				ans[i]=arr1[i];
					printf("\nThe common elements of array 1 and 2 are: %d",ans[i]);
			}
		}
		
	}
	return 0;
}

int main()
{
	int arr1[5], arr2[5],i;
	printf("\nEnter a maximum of 5 elements in each array!!!");
	
	for (i=0;i<5;i++)
	{
		printf("\nEnter the element %d for array 1: ",i+1);
		scanf("%d",&arr1[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("\nEnter the element %d for array 2: ",i+1);
		scanf("%d",&arr2[i]);
	}
	intersect(arr1,arr2);
}
