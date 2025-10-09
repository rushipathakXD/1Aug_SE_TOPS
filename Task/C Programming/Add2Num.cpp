#include<iostream>
using namespace std;
// setting default parameters
int add(int num1=0, int num2=0)
{
	return num1+num2;
}

int main()
{
	int num1,num2;
	cout<<"Enter number 1: ";
	cin>>num1;
	
	cout<<endl<<"Enter number 2: ";
	cin>>num2;
	
	cout<<endl<<add(num1,num2);
	return 0;
}
