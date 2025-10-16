//1. Array Sum and Average
//o Write a C++ program that accepts an array of integers, calculates the sum and
//average, and displays the results.
//o Objective: Understand basic array manipulation.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the Upper Limit: "<<endl;
	cin>>num;
	
	float arr[num];
	int len = sizeof(arr)/sizeof(arr[0]);
	float sum=0.0;
	float avg;
	for(int i=0;i<num;i++)
	{
		cout<<"Enter element no. "<<i+1<<":"<<endl;
		cin>>arr[i];
		sum=sum+arr[i];
		avg=sum/num;
	}
	cout<<"The sum is: "<<sum<<endl;
	cout<<"The average is: "<<avg<<endl;
}
