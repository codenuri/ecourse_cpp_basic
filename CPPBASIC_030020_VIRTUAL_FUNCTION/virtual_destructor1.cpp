#include <print>

class Base 
{
public:
	Base()  { }
	~Base() { }
};
class Derived : public Base 
{
public:
	Derived()  { std::println("Derived()  : get resource");}
	~Derived() { std::println("~Derived() : release resource");}
};

int main()
{
//	Derived d;

//	Derived* p = new Derived;
//	delete p;

	Base* p = new Derived;
	delete p;
}
