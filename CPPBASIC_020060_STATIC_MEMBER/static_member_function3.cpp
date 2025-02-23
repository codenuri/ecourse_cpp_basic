class Car
{
	int speed{0};
	int color{0};
	inline static int count{0};
public:
	static void f1()
	{
		speed = 10;		// error
		count = 10;		// ok
		auto p = this;	// error
		f2();			// error
	}
	void f2()
	{
		speed = 10;		// ok
		count = 10;		// ok
		auto p = this;	// ok
		f1();			// ok
	}
};
int main()
{
	Car::f1();

	Car c1;
	c1.f2(); // f2(&c2)
}