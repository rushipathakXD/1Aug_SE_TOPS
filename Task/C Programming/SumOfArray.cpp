#include<iostream>
using namespace std;
int main()
{
	int len;
	cout<<"Enter the length of an Array: "<<endl;
	cin>>len;
	
	int number[len],sum=0;
	
	for(int i=0;i<len;i++)
	{
		cout<<"Enter the "<<i+1<<" element: "<<endl;
		cin>>number[i];
	}
	for(int i=0;i<len;i++)
	{
		cout<<number[i]<<", ";
		sum+=number[i];
	}
	cout<<endl<<endl<<"Sum of all elements is: "<<sum;
}
