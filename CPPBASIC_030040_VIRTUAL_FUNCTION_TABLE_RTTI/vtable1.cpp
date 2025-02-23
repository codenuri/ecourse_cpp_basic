class Base 
{
	int bm;
public:
	virtual void f1() {}
	virtual void f2() {}
	virtual void f3() {}
};
class Derived : public Base 
{
	int dm;
public:
	void f2() override {}
};
int main()
{
	Base b1, b2;
	Derived d1;
	Base* p = &d1;
	
	p->f2();
}