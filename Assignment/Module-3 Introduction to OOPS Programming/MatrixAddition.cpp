//2. Matrix Addition
//o Write a C++ program to perform matrix addition on two 2x2 matrices.
//o Objective: Practice multi-dimensional arrays

#include<iostream>
using namespace std;
int main()
{
	int matrix1[2][2], matrix2[2][2], matrix3[2][2];
	cout<<"FOR MATRIX 1"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter "<<i<<j<<"  element: "<<endl;
			cin>>matrix1[i][j];
		}
	}
	
	cout<<"FOR MATRIX 2"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter "<<i<<j<<" element: "<<endl;
			cin>>matrix2[i][j];
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<matrix1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<endl<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<matrix2[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<endl<<endl;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			matrix3[i][j]=matrix1[i][j]+ matrix2[i][j];
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<matrix3[i][j]<<"\t";
		}
		cout<<endl;
	}
	
}
