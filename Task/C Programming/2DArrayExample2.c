#include<stdio.h>
int main()
{
	int row,col;
	
	printf("Enter number of rows: ");
	scanf("%d",&row);
	
	printf("Enter number of columns: ");
	scanf("%d",&col);
	
	int matrix[row][col];
	int i,j;
	
//	for taking input	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the matrix element for position[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}

//	for printing
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",matrix[i][j]);
		}
		printf("\n");
	}
}
