#include <print>
#include "car.h"

int main()
{
	std::println("{}", Car::count);	

	Car c1{1, 70};
	Car c2{2, 80};

	std::println("{}", Car::count);
}