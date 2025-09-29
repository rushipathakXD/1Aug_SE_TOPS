#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter Number 1 to compare: "<<endl;
	cin>>num1;
	cout<<"Enter Number 2 to compare: "<<endl;
	cin>>num2;
	cout<<"Enter Number 3 to compare: "<<endl;
	cin>>num3;
	
	int x,y,z;
	num1>num2 && num1>num3? x=1 : y=0;
	num2>num1 && num2>num3? y=1 : z=0;
	num3>num1 && num3>num2? z=1 : x=0;
	
	x==1? cout<<num1<<" is greater" : cout<<num1<<" is not greater"<<endl ;
	y==1? cout<<num2<<" is greater" : cout<<num2<<" is not greater"<<endl ;
	z==1? cout<<num3<<" is greater" : cout<<num3<<" is not greater"<<endl ;
}
