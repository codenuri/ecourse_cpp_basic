#include <string>

struct Person
{
private:
	std::string name;
	int age;

public:
	void set_age(int a)
	{
		if ( a > 0 && a < 150)
			age = a;
	}
};

int main()
{
	Person p;
//	p.age = -20; // error
	p.set_age(-20); // ok 
}
