#include <print>

class Car
{	
	int color;
	int speed;	
	inline static int count{0};
public:		
	Car(int c, int s) : color{c}, speed{s} { ++count;  }
	~Car() { --count; }	

	void set_speed(int s) { speed = s;}
	int  get_speed() const { return speed;}
	
	static int get_count() { return count;}	
};
	
int main()
{
	Car c1{1, 70};
	Car c2{2, 80};

	std::println("{}", Car::get_count() ); // ok
	std::println("{}", c1.get_count() );   // ok
	std::println("{}", c2.get_count() );   // ok
}