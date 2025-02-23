class Base
{
private:   int a;
protected: int b;
public:    int c;
};

int main()
{
    Base base;
    base.a = 10; // error 
    base.b = 10; // error
    base.c = 10; // ok
}

class Derived : public Base
{
public:
    void foo()
    {
        a = 10; // error
        b = 10; // ok
        c = 10; // ok
    }
};







