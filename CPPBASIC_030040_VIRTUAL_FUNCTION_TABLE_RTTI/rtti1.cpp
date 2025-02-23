#include <typeinfo>
#include <print>

int main()
{
	int n = 10;

	const std::type_info& t1 = typeid(n);

	std::println("{}", t1.name());

}
