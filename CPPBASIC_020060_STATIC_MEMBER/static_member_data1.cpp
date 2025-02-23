#include <print>

class Car
{	
	int color;
	int speed;
public:	
	int count{0};

	Car(int c, int s) : color{c}, speed{s} { ++count;  }

	~Car() { --count; }
};

int main()
{
	Car c1{1, 70};
	Car c2{2, 80};

	std::println("{}", c1.count);
}