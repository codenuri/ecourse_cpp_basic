#include <print>

class Base
{
    int data;
public:
    Base()      { std::println("Base()");   }
    Base(int a) { std::println("Base(int)");}
    ~Base()     { std::println("~Base()");  }
};

class Derived : public Base
{
public:
	Derived()      { std::println("Derived()");   }
	Derived(int a) { std::println("Derived(int)");}
	~Derived()     { std::println("~Derived()");  }
};

int main()
{
//  Derived d1;
    Derived d2{5};
}


