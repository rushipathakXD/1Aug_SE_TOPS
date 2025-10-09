#include<iostream>
#include<string.h>
using namespace std;

class Car
{
	public:
		int engine,wheels;
		string c_name,name;
		
		int getData()
		{
			cout<<"Enter Engine Number: "<<endl;
			cin>> engine;
			cout<<"Enter Number of wheels: "<<endl;
			cin>> wheels;
			cout<<"Enter car name: "<<endl;
			cin>> c_name;
			cout<<"Enter Name of Owner: "<<endl;
			cin>> name;
			return 0;
		}
		
		int display()
		{
			cout<<endl<<endl<<"\t"<<engine<<endl;
			cout<<endl<<endl<<"\t"<<wheels<<endl;
			cout<<endl<<endl<<"\t"<<c_name<<endl;
			cout<<endl<<endl<<"\t"<<name<<endl;
			return 0;
		}
};

int main()
{
	Car i10,baleno,creta;
	i10.getData();
	baleno.getData();
	creta.getData();
	i10.display();
	baleno.display();
	creta.display();
	
}
