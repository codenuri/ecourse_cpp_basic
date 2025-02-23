#include <string>

class Person
{
    std::string name;
    int age;
};

class Professor : public Person
{
    int major;    
};

class Student : public Person
{
    int id;
};

int main()
{
    Student s;
	Professor p;
}