//Lab task -- find no. of vowels from given string
#include<stdio.h>
#include<string.h>

int main()
{
	char name[10];
	printf("Enter a String: ");
	scanf("%s",name);
	int i,count=0;
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]== 'a' ||name[i]== 'e'||name[i]== 'i'||name[i]== 'o'||name[i]== 'u')
		{
			count++;
			
			printf(" %c",name[i]);
		}
	}
		printf("\nTotal number of vowels are: %d",count);
}
