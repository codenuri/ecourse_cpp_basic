#include <print>

class Animal 
{ 
	int age;
public: 
	virtual ~Animal() {}
};

class Cat : public Animal {};
class Dog : public Animal { public: int color; };

int main()
{
	Cat c;
	Dog d;

//	Animal* p = &d;
	Animal* p = &c;

	Dog* pd = static_cast<Dog*>(p);

	std::println("{}", reinterpret_cast<void*>(pd));

//	pd->color = 10;
}