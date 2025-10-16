//1. Class for a Simple Calculator
//o Write a C++ program that defines a class Calculator with functions for addition,
//subtraction, multiplication, and division. Create objects to use these functions.
//o Objective: Introduce basic classstructure.

#include<iostream>
using namespace std;

class Calculator
{
	public:
		int add(int num1, int num2){
			return num1+num2;
		}
		int sub(int num1, int num2){
			return num1-num2;
		}
		int mul(int num1, int num2){
			return num1*num2;
		}
		float div(int num1, int num2){
			return num1/num2;
		}
};

int main()
{
	Calculator c1,c2,c3,c4;
	cout<<c1.add(5,30)<<endl;
	cout<<c2.sub(5,7)<<endl;
	cout<<c3.mul(5,6)<<endl;
	cout<<c4.div(30,6)<<endl;
}
