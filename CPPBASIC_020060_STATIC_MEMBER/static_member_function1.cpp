#include <print>

class Car
{	
	int color;
	int speed;	
	inline static int count{0};
public:		
	Car(int c, int s) : color{c}, speed{s} { ++count;  }
	~Car() { --count; }	

//	int get_count() const { return count;}	
	static int get_count() { return count;}	
};
	
int main()
{
	std::println("{}", Car::get_count() );  // 0

	Car c1{1, 70};
	Car c2{2, 80};

//	Car::count = -10; // error

	std::println("{}", Car::get_count() ); // 2
}