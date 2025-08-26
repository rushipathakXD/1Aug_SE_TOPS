/*
1	1	1	1	1
2	2	2	2
3	3	3
4	4
5
5
4	4
3	3	3
2	2	2	2
1	1	1	1	1
*/


/*
Coding this pattern first
1	1	1	1	1
2	2	2	2
3	3	3
4	4
5
*/
#include<stdio.h>
int main()
{
		int num,i,j;
		printf("Enter number of row ");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{
			for(j=num;j>=i;j--)
			{
				printf("%d ",i);
			}
			printf("\n");
		}
		
//Coding this pattern now
/*
 c=1 c=2   c=3     c=4      c=5	
r=1 5
r=2 4	4
r=3 3	3	3
r=4 2	2	2	2	
r=5 1	1	1	1	1
*/
	int col,row,r;
	row=num;
	//for row
	for(r=num;r>=1;r--)
	{
		//for column
		for(col=num;col>=r;col--)
		{
			printf("%d ",r);
		}
		printf("\n");
	}
}

