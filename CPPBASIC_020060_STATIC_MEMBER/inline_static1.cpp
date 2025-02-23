class Car
{	
	int color;
	int speed;
public:	
	inline static int count{0};

	Car(int c, int s) : color{c}, speed{s} { ++count;  }
	~Car() { --count; }
};

//int Car::count{0};

int main()
{
	Car c1{1, 70};
}
