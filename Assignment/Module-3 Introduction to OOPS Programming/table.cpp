//Multiplication Table
//o Write a C++ program to display the multiplication table of a given number using a for
//loop.
//o Objective: Practice using loops.

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number whose table is to be shown: "<<endl;
	cin>>num;
	
	for(int i=1;i<=10;i++)
	{
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
}
