#include<iostream>
using namespace std;
class Test
{
	public:
		void print(string name)
		{
			cout<<name<<endl;
		}
		void print(int num)
		{
			cout<<num<<endl;
		}
		void print(char x)
		{
			cout<<x;
		}
};
int main()
{
	Test t;
	t.print("Rushi");
	t.print(21);
	t.print("P");
}
