#include <print>

class Car
{	
	int color;
	int speed;	
	inline static int count{0};
public:		
	Car(int c, int s) : color{c}, speed{s} { ++count;  }
	~Car() { --count; }	

	static int get_count();
};

//static int Car::get_count()  // error
int Car::get_count() 		 // ok
{ 
	return count;
}	

int main()
{
}