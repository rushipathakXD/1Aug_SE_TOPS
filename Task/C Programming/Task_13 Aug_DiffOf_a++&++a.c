// WAP to understand the functionality and difference between a++ and ++a
#include<stdio.h>
int main()
{
	int a=10,ans;
	ans = ++a;
	printf("%d, %d", ans,a);
	ans = a++;
	printf("\n%d, %d", ans,a);
	int b=20;
	printf("\n%d, %d",b++,++b);
}
