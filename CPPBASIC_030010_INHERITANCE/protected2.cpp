#include <print>
#include <string>

class Person
{
private:
//protected:
    std::string name;
    int age;

public:
    int get_age() const { return age;}
	void set_age(int a) { if ( a >= 0 && a < 150 )age = a; }
};

class Student : public Person
{
    int id;
public:
    void print_age() const
    {
//		std::println("{}", age); // error
		std::println("{}", get_age()); // ok
		set_age(10); // ok
		age = -10;
    }
};

int main()
{

}







