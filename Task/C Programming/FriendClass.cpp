#include<iostream>
using namespace std;

class B;
class A
{
	private:
		int a=10;
	protected:
		int b=20;
	public:
		int c=30;
		friend class B;
};

class B
{
	public:
	void dispPriData(A obj)
	{
		cout<<obj.a<<endl;
	}
	void dispProData(A obj)
	{
		cout<<obj.b<<endl;
	}
};

int main()
{
	A obj1;
	B obj2;
	obj2.dispPriData(obj1);
	obj2.dispProData(obj1);
}
