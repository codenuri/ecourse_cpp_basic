#include <print>

class vector
{
	int* ptr;
	std::size_t sz;
public:
	vector(std::size_t s, int value)
	{
		sz = s;
		ptr = new int[sz];
		for( int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~vector() { delete[] ptr;}

	int& at(int idx) { return ptr[idx]; } 
};

int main()
{
	vector v(4, 0); 
	
	v.at(0) = 10;  // v[0] = 10

	std::println("{}", v.at(0)); // 10
}

