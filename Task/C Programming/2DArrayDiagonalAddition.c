//Sum of diagonals of a matrix
#include<stdio.h>
int main()
{
	int sum=0,i,j,row,col;
	
	printf("Enter number of rows: ");
	scanf("%d",&row);
	
	printf("Enter number of columns: ");
	scanf("%d",&col);
	
	if(row!=col)
	{
		printf("Addition not possible as number of rows and coulumns is not possible!!!");
		return 0;
	}
	
	int matrix1[row][col],matrix2[row][col],matrix3[row][col];
	
	printf("\nEnter the elements of 1st Matrix----");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element at [%d][%d]: ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
		printf("\n\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d ",matrix1[i][j]);
		}
		printf("\n");
	}
//	printf("\nEnter the elements of 2nd Matrix----");
//	
//	
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		{
//			printf("\n\nEnter the element at [%d][%d]: ",i,j);
//			scanf("%d",&matrix2[i][j]);
//		}
//	}
//	
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		{
//			printf("\t%d ",matrix2[i][j]);
//		}
//		printf("\n");
//	}
//	
//	

	
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			if(i==j)
			{
				sum+=matrix1[i][j];
			}
		}
	}
	printf("Sum of diagonals of Matrix 1 is : %d",sum);
}
