class Base
{
public:
    Base(int a) { }
};

class Derived : public Base
{
public:
	Derived() : Base{0}
	{ 		
	}
	Derived(int a) : Base{a}
	{ 
	}
};

int main()
{

}


