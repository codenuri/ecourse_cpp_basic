#include <print>

class Base 
{
public:
	Base()  { std::println("Base()");  }
//	~Base() { std::println("~Base()"); }
	virtual ~Base() { std::println("~Base()"); }
};
class Derived : public Base 
{
public:
	Derived()  { std::println("Derived()  : get resource");}
	~Derived() { std::println("~Derived() : release resource");}
};

int main()
{
	Base* p = new Derived;
	delete p;
}
