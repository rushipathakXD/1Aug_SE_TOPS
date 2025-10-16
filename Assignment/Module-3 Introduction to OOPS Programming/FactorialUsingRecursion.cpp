//2. Factorial Calculation Using Recursion
//o Write a C++ program that calculates the factorial of a number using recursion.
//o Objective: Understand recursion in functions.

#include<iostream>
using namespace std;


int factorial(int n){
	int fact=1;
	if(n==0 || n==1)
	{
		return 1;
	}
	fact= n*factorial(n-1);
	return fact;
	
}

int main()
{
	factorial(5);
	int num=5;
	int fact = factorial(num);
	cout<<"Factorial of "<<num<<" is "<<fact<<endl; 
}
