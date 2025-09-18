#include<stdio.h>
int freq(int arr[])
{
	int num,count,i,j,ans[4];
	for(i=0;i<4;i++)
	{
		
		for(j=0;j<4;j++)
		{
			
			num=arr[i];
			if(num==arr[j])
			{
				count++;
				ans[i]=num;
			}
			
		}
		printf("\n%d ---> %d",ans[i],count);
		count=0;
	}
	return 0;
}

int main()
{
	int i,arr1[4];
	printf("\nEnter 4 elements in an array: ");
	
	for(i=0;i<4;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr1[i]);
	}
	freq(arr1);
}
