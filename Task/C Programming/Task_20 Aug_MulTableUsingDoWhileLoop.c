//Multiplication table using do-while loop
#include<stdio.h>
int main()
{
	int num,i=1,ans=1;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	do{
		ans=num*i;
		printf("\n%d * %d = %d",num,i,ans);
		i++;
	}while(i<=10);
}
