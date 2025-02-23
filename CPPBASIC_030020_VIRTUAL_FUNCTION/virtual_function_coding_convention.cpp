class Shape 
{
public:	
	virtual void draw() const;
	virtual void move();
	static int get_count();
};
void Shape::draw() const { }
void Shape::move() {}
int  Shape::get_count() { return 0;}

class Rect : public Shape 
{
public:
	void draw() const override;
	void move() override final;
};

void Rect::draw() const {}
void Rect::move() {}

int main()
{

}