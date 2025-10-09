#include<iostream>
using namespace std;
int val = 100;
void printVal()
{
	//local
	int val = 200;
	cout<<val<<endl;
	
//	access global
	cout<<::val<<endl;
	::val = 300;
	cout<<::val<<endl;
}

int main()
{
	printVal();
}
