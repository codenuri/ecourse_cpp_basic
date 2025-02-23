class Base 
{
public:
	virtual void f1() {}
	virtual void f2() {}
};

class Derived1 : public Base 
{
public:
	void f1() override {}			// ok
	void f2() override final {}		// ok
};

class Derived2 : public Derived1 
{
public:
	void f1() override {}	// ok
	void f2() override {}   // error
};

class Derived3 final : public Derived2 {};

class Derived4 : public Derived3 {}; // error 

int main()
{	
}