#include <print>

// vector_t.h
template<typename T>
class vector
{
	T* ptr;
	std::size_t sz;
public:
	std::size_t size();
};


