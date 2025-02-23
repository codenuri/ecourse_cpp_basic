#include <string>
#include <string_view>

class Person
{
	std::string name;
	int age;
public:
	Person& set_name(std::string_view n)
	{
		name = n;
		return *this;
	}

	Person& set_age(int age)
	{
		this->age = age;
		return *this;
	}	
};

int main()
{
	Person p;
	p.set_name("john").set_age(30);
}