#include <string>

//struct Person
class Person
{
//private:
	std::string name;
	int age;
};

int main()
{
	Person p;
	p.age = -20;	// error
}
