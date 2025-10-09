#include<iostream>
using namespace std;

class Vehicle
{
	public:
	string color;
	int engine, price;
	
	void getData()
	{
		cout<<"Enter color: "<<endl;
		cin>>color;
		
		cout<<"Enter Engine number: "<<endl;
		cin>>engine;
		
		cout<<"Enter price: "<<endl;
		cin>>price;
	}
	
	void display()
	{
		cout<<"The color is: "<<color<<endl;
		cout<<"The Engine number is: "<<engine<<endl;
		cout<<"The price is: "<<price<<endl;
	}
};

class Car : public Vehicle
{
	public:
	string brand,model;
	void getCarData()
	{
		cout<<"Enter the brand name: "<<endl;
		cin>>brand;
		
		cout<<"Enter the model: "<<endl;
		cin>>model;
	}
	
	void displayCar()
	{
		cout<<"Brand name: "<<brand<<endl;
		cout<<"Model: "<<model<<endl;
	}
};

int main()
{
	Car c;
	c.getData();
	c.getCarData();
	c.display();
	c.displayCar();
}
