// POP vs. OOP Comparison Program
//o Write two small programs: one using Procedural Programming (POP) to calculate the
//area of a rectangle, and another using Object-Oriented Programming (OOP) with a
//class and object for the same task.
//o Objective: Highlight the difference between POP and OOP approaches.

//OOP
#include<iostream>
using namespace std;
class Example{
	public:
		void greet()
		{
			cout<<"Hey There!!";
		}
};

int main()
{
	Example e;
	e.greet();
}
