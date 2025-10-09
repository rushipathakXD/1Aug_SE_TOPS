#include<iostream>
using namespace std;

class Shape
{
	public:
		virtual int calculateArea()
		{
			cout<<"In shape"<<endl;
		}
};

class Rectangle:public Shape
{
	public:
		int calculateArea()
		{
			int l=100,b=20;
			return l*b;
			}	
};

class Square:public Shape
{
	public:
		int calculateArea()
		{
			int l=20;
			return l*l;
		}
};

int main()
{
	Shape *s;
	
	Rectangle r;
	s=&r;
	cout<<"Area of Rectangle is: "<<s->calculateArea()<<endl;
	
	Square s1;
	s=&s1;
	cout<<"Area of Rectangle is: "<<s->calculateArea()<<endl;
}
