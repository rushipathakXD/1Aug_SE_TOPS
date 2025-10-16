//3. String Palindrome Check
//o Write a C++ program to check if a given string is a palindrome (reads the same
//forwards and backwards).
//o Objective: Practice string operations.
#include<iostream>
using namespace std;
int main()
{
	string name;
	cout<<"Enter a word: "<<endl;
	cin>>name;
	
	string reverse;
	for(int i=name.size()-1;i>=0;i--)
	{
		reverse= reverse+name[i];
	}
	
	if(name==reverse)
	{
		cout<<"The entered string is palindrome."<<endl;
	}
	else
	{
		cout<<"The entered string is not palindrome."<<endl;
	}
	
}
