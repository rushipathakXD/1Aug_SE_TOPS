#include<iostream>
using namespace std;
class Point
{
	public:
		Point()
		{
			}
		int x,y;
		Point(int x, int y)
		{
			this->x=x;
			this->y=y;
			}	
			
			void display()
			{
				cout<<x<<" : "<<y<<endl;
			}
			
			Point operator - (Point p1)
			{
				Point p3(x-p1.x,y-p1.y);
				return p3;
			}
			Point operator * (Point p1)
			{
				Point p4(x*p1.x,y*p1.y);
				return p4;
			}
};

int main()
{
	Point p(2,3);
	Point p1(5,7);
	Point p2,p5;
	p2 = p-p1;
	p5 = p*p1;
	p2.display();
	p5.display();
}
