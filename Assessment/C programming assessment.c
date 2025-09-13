//Program for multiplication of matrix
#include<stdio.h>
int main()
{
	int i,j,k,row1,row2,row3,col1,col2,col3;
	
	printf("Enter number of rows for 1st Matrix: ");
	scanf("%d",&row1);
	
	printf("Enter number of columns for 1st Matrix: ");
	scanf("%d",&col1);
	
	int matrix1[row1][col1];
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("Enter the [%d][%d] element: ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("\t%d",matrix1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter number of rows for 2nd Matrix: ");
	scanf("%d",&row2);
	
	printf("Enter number of columns for 2nd Matrix: ");
	scanf("%d",&col2);
	
	int matrix2[row2][col2];
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("Enter the [%d][%d] element: ",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("\t%d",matrix2[i][j]);
		}
		printf("\n");
	}
	int productMatrix[row2][col2];
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			productMatrix[i][j]=0;
			for(k=0;k<col1;k++)
			{
				productMatrix[i][j]+= matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	printf("\nResultant Matrix: \n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("\t%d",productMatrix[i][j]);
		}
		printf("\n");
	}
}
