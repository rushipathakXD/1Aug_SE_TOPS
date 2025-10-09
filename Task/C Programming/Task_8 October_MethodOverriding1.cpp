#include<iostream>
using namespace std;

class Shape
{
	public:
		virtual	int calculateArea()
		{
			cout<<"In shape!!!"<<endl;
		}
};

class Rectangle:public Shape
{
	int l1,b1;
	public:
		Rectangle()
		{
			int l,b;
			cout<<"Enter the length of Rectangle: "<<endl;
			cin>>l;
			
			cout<<"Enter the width of Rectangle: "<<endl;
			cin>>b;
			
			l1=l;
			b1=b;
		}
		int calculateArea()
		{
			cout<<"The area of Rectangle is: ";
			return l1*b1;
		}
};

class Square:public Shape
{
	int s1;
	public:
	 	Square()
		{
			int s;
			cout<<"Enter the side of Square: "<<endl;
			cin>>s;
			s1=s;
		}
		int calculateArea()
		{
			cout<<"The area of Square is: "<<endl;
			return s1*s1;
		}
};

int main()
{
	Shape *s;
	Rectangle r;
	s=&r;
	cout<<s->calculateArea()<<endl;
	
	Square s1;
	s=&s1;
	cout<<s->calculateArea();
}
