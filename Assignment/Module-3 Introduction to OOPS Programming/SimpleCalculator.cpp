//1. Simple Calculator Using Functions
//o Write a C++ program that defines functions for basic arithmetic operations (add,
//subtract, multiply, divide). The main function should call these based on user input.
//o Objective: Practice defining and using functions in C++.

#include<iostream>
using namespace std;

int add(int num1,int num2)
{
	cout<<num1+num2;
	return num1+num2;
}

int sub(int num1,int num2)
{
	cout<<num1-num2;
	return num1-num2;
}

int mul(int num1,int num2)
{
	cout<<num1*num2;
	return num1*num2;
}

float div(int num1,int num2)
{
	cout<<num1/num2;
	return num1/num2;
}

int main()
{
	int num1,num2;
	cout<<"Enter 1st Number: "<<endl;
	cin>>num1;
	cout<<"Enter 2nd Number: "<<endl;
	cin>>num2;
	
	char c;
	cout<<"Enter(+) for Addition, (-) for Subtraction, (*) for Multiplication, (/) for Division"<<endl;
	cin>>c;
	
	switch(c){
	
	case'+':
		add(num1,num2);
		break;
	case'-':
		sub(num1,num2);
		break;
	case'*':
		mul(num1,num2);
		break;
	case'/':
		div(num1,num2);
		break;
	}
}
