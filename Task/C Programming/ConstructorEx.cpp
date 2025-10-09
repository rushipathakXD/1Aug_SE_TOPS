#include<iostream>
using namespace std;
class Person
{
	public:
		int age1;
		string name1,address1;
		Person()
		{
			cout<<"In Person from constructor "<<endl;
		}
		Person(string name,int age)
		{
			name1= name;
			age1=age;
		}
		Person(string name,int age,string address)
		{
			name1= name;
			age1=age;
			address1=address;
		}
		
		void display()
		{
			cout<<name1<<"\t"<<age1<<"\t"<<address1<<endl;
		}
};

int main()
{
	Person p("Rushi",21);
	Person p1("Rushi",21,"Ahmedabad");
	p.display();
	p1.display();
}
