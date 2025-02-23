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
	std::println("{}", Car::count);

	Car c1{1, 70};
	Car c2{2, 80};

	std::println("{}", sizeof(c1)); // 8

	std::println("{}", Car::count);
	std::println("{}", c1.count);
	std::println("{}", c2.count);
}