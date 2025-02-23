#include <print>
#include <cstring>

template<typename T>
class vector
{
	T* ptr;
	std::size_t sz;
public:
	vector(std::size_t s, T value)
	{
		sz = s;
		ptr = new T[sz];
		for( int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~vector() { delete[] ptr;}

	T& at(std::size_t idx) { return ptr[idx]; } 

	void resize(std::size_t new_size)
	{
		if ( new_size > sz )
		{
			T* temp = new T[new_size];
			memcpy(temp, ptr, sizeof(T)*sz);
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
//	vector<double> v1(4, 1.1); 
	vector<int>    v2(4, 0); 

	vector v1(4, 1.1); 

	std::println("{}", v1.at(0));
}

