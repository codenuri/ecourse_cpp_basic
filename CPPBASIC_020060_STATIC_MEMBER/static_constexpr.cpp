class Car 
{
public:
	// C++11 static constexpr
	static constexpr int  	c1 = 0;	// ok
	static constexpr double c2 = 0;	// ok
	static constexpr char   c3 = 0;	// ok
	static constexpr int x1[3] = {1,2,3}; // ok
};

int main()
{
}
