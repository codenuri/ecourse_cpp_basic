#include <print>

int count{0};

class Car
{	
	int color;
	int speed;
public:	
	Car(int c, int s) : color{c}, speed{s} { ++count;  }

	~Car() { --count; }
};

int main()
{
	Car c1{1, 70};
	Car c2{2, 80};

	count = -10;
	
	std::println("{}", count);
}