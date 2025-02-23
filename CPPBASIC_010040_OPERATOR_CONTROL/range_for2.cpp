#include <print>
#include <string>

std::string get_name()
{
	return "Alice";
}

int main()
{
	for( auto name = get_name(); auto e : name)
	{
		std::print("{}, ", e);
	}
}

