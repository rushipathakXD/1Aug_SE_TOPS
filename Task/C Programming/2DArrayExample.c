#include<stdio.h>
int main()
{
	int row,col;
	
	printf("Enter number of rows: ");
	scanf("%d",&row);
	
	printf("Enter number of columns: ");
	scanf("%d",&col);
	
	int marks[row][col];
	int i,j;
	
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("Enter the value for [%d][%d] element: ",i,j);
			scanf("%d",&marks[i][j]);
		}
	}
	for(i = 0;i < row; i++)
	{
		for(j = 0;j < col; j++)
		{
			printf("%d\t",marks[i][j]);
		}
		printf("\n");
	}
}
