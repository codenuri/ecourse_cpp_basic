class Car 
{
public:
	// C++98 static const
	static const int  	c1 = 0;	 // ok
	static const double c2 = 0;	 // error
	static const char   c3 = 0;	 // ok

	static const int x1[3] = {1,2,3}; // error 

	static const int c4 = 0; // ok
	static const int c5;     // ok 
};

const int Car::c4 = 0; // error	
const int Car::c5 = 0; // ok 

int main()
{
}
