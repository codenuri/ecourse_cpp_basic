#include <print>

class Car
{	
	int color;
	int speed;
public:	
	static int count;

	Car(int c, int s) : color{c}, speed{s} { ++count;  }

	~Car() { --count; }
};
int Car::count{0};

int main()
{
	Car c1{1, 70};
	Car c2{2, 80};

//	Car::count = -10;
	
	std::println("{}", Car::count);
}