#include<stdio.h>
int main()
{
	int row,col,i,j,cols;
	printf("Enter number of rows: ");
	scanf("%d",&row);
	printf("Enter max number(UpperLimit) of columns: ");
	scanf("%d",&cols);
	int matrix[row][cols];
	for(i=0;i<row;i++)
	{
		printf("Enter number of columns for row %d: ",i+1);
		scanf("%d",&col);
		
		for(j=0;j<col;j++)
		{
			printf("Enter the elements for [%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",matrix[i][j]);
		}
		printf("\n");
	}
}
