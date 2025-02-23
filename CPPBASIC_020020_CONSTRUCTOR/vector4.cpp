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

	void resize(std::size_t new_size)
	{
		if ( new_size > sz )
		{
			int* temp = new int[new_size];
			memcpy(temp, ptr, sizeof(int)*sz);
			delete[] ptr;
			ptr = temp;
			sz = new_size;
		}
		else 
		{
		}
	}

	std::size_t size() { return sz;}
	bool empty() { return sz == 0;}
};

int main()
{
	vector v(4, 0); 

	std::println("{}", v.size());  // 4
	std::println("{}", v.empty()); // false
}

