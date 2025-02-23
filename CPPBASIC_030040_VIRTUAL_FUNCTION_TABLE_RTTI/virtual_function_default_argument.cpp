#include <print>

class Base 
{
public:
	virtual void foo(int n = 10) 
	{ 
		std::println("Base : {}", n); 
	}
};
class Derived : public Base 
{
public:
	void foo(int n = 20) override
	{ 
		std::println("Derived : {}", n); 
	}
};

int main()
{
	Derived d;
	Base* p = &d;

	p->foo(); // p->foo(10)
}