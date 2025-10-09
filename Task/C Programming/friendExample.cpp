#include<iostream>
using namespace std;

class Employee
{
	private:
		int salary;
	public:
		string name, department;
		
	Employee()
	{
		cout<<"Enter name: "<<endl;
		cin>>name;
		cout<<"Enter salary: "<<endl;
		cin>>salary;
		cout<<"Enter department: "<<endl;
		cin>>department;	
	}
	
	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Department: "<<department<<endl;
	}
	friend void dispSalary(Employee emp);
};

void dispSalary(Employee emp)
{
	cout<<"Salary: "<<emp.salary<<endl;
}

int main()
{
	Employee e;
	e.display();
	dispSalary(e);
}
