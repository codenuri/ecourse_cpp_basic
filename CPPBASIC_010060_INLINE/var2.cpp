#include <print>
#include "var.h"

void foo();

int main()
{
	std::println("{}", 
	reinterpret_cast<void*>(&x));

	foo();
}