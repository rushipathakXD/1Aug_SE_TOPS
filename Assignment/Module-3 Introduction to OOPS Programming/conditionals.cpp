//1. Grade Calculator
//o Write a C++ program that takes a student’s marks as input and calculates the grade
//based on if-else conditions.
//o Objective: Practice conditional statements(if-else).

#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter the marks of student: "<<endl;
	cin>>marks;
	
	if(marks>0 && marks<=35)
	{
		cout<<"Failed! Better Luck next time!"<<endl;
	}
	
	if(marks>35 && marks<=40)
	{
		cout<<"E grade"<<endl;
	}
	
	if(marks>40 && marks<=50)
	{
		cout<<"D grade"<<endl;
	}
	
	if(marks>50 && marks<=60)
	{
		cout<<"C grade"<<endl;
	}
	
	if(marks>60 && marks<=70)
	{
		cout<<"B grade"<<endl;
	}
	
	if(marks>70 && marks<=80)
	{
		cout<<"A grade"<<endl;
	}	
	
	if(marks>80)
	{
		cout<<"O grade"<<endl;
	}
}
