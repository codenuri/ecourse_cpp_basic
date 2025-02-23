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
};

int main()
{
	vector v(4, 0); // 4개를 0 으로 초기화

//	v.resize(8);	// 크기를 8개로 변경
}

