class Shape 
{
public:
	virtual void move() = 0;
};

class Rect : public Shape 
{
public:
	void move() override {}
};

int main()
{
	Shape s; // error	
	Rect  r; // ok 
	Shape* p = &r; // ok
	p->move();
}