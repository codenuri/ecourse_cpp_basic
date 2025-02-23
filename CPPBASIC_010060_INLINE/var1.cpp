#include <print>
#include "var.h"

void foo()
{
	std::println("{}", 
	reinterpret_cast<void*>(&x));
}
