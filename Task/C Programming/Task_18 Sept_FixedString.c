#include<stdio.h>
#include<string.h>

int main()
{
	char string[20];
	char string1[20];
	int i=1,j;
	
	printf("Enter a name: ");
	scanf("%s",string);
	
	printf("Enter another name: ");
	scanf("%s",string1);
	
	while(i=1)
	{
		j=strcmp(string,string1);
		if(j==0)
		{
			printf("Both the strings (%s) and (%s) are equal",string,string1);
			break;
		}
		else
		{
			printf("Enter another name: ");
			scanf("%s",string1);
		}
	}
}
