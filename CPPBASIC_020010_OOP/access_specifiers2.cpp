#include <string>
#include <print>

struct Person
{
private:
	std::string name;
	int age;

public:
	void set_name(const std::string& n) 
	{ 
		name = n; 
	}
	void set_age(int a)
	{
		if ( a > 0 && a < 150)
			age = a;
	}
	std::string get_name() { return name; }
	int get_age()          { return age;}
};

int main()
{
	Person p;
	p.set_name("john");
	p.set_age(20);

	std::println("{}", p.get_name());
	std::println("{}", p.get_age());
}
