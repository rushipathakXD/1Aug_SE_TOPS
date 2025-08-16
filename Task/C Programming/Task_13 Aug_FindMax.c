//WAP to find the maximum among 3 numbers using if...else...if else if

#include<stdio.h>
int main(){
	int a,b,c;
	
	//taking user inputs to compare 3 numbers
	
	printf("Enter number 1: ");
	scanf("%d",&a);
	
	printf("Enter number 2: ");
	scanf("%d",&b);
	
	printf("Enter number 3: ");
	scanf("%d",&c);
	
	//using if...else...if else if to determine the maximum number among 3 numbers
	
	if(a>b){
		if(a>c){
			printf("%d is greater.",a);
		}
	}
	else if(b>a){
		if(b>c){
			printf("%d is greater.",b);
		}
	}
	// else
	// {
		printf("%d is greater.",c);
	// }
}
