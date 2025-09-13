//Array in C
#include<stdio.h>
int main()
{
	int numbers[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter the %dth element: ",i+1);
		scanf("%d",&numbers[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\t%d",numbers[i]);
	}
	
	printf("\n2D Array------------>");
	int row,col;
	printf("\nEnter the number of rows: ");
	scanf("%d",&row);
	
	printf("\nEnter the number of columns: ");
	scanf("%d",&col);
	
	int matrix[row][col],j,sum=0;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the [%d][%d] element: ",i,j);
			scanf("%d",&matrix[i][j]);
			sum+=matrix[i][j];	
		}
		
	}
	printf("\nThe sum of all elements is %d",sum);
}
