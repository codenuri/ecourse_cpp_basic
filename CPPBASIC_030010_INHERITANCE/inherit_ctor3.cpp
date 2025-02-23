#include <string>
#include <string_view>

class Person
{
	std::string name;
	int age;
public:
	Person(std::string_view name, int age)
		: name{name}, age{age}{}
};

class Student : public Person 
{
	int id;
public:
	Student(std::string_view name, int age, int id) 
		: Person{name, age}, id{id} {}
};

int main()
{
	Student s{"Alice", 30, 99};
	Person p{"Alice", 30};
}