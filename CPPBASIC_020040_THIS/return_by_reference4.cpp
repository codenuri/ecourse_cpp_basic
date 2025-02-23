#include <print>

class Counter 
{
public:
	int count{0};

//	Counter increment()
	Counter& increment()
	{
		++count;
		return *this;
	}
};
int main()
{
	Counter c;

	c.increment().increment().increment();

	std::println("{}", c.count);
}