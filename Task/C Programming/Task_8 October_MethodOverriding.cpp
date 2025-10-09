//lab task : create class Car - drive() virtual 
//						Maruti --->Car method override drive() - maruti car inforamtion print
//						Hyundai -->Car drive() - hyundai information print

#include<iostream>
using namespace std;

class Car
{
	public:
	virtual void drive()
	{
		cout<<"In car class!!!"<<endl;
	}
};

class Maruti:public Car
{
	public:
		void drive()
		{
			cout<<"Maruti Suzuki WagonR"<<endl;
		}	
};

class Hyundai:public Car
{
	public:
		void drive()
		{
			cout<<"Hyundai Venue"<<endl;
		}
};

int main()
{
	Car *c;
	
	Maruti m;
	c=&m;
	c->drive();
	
	Hyundai h;
	c=&h;
	c->drive();
}
