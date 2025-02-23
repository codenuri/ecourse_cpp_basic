class Shape
{
public:
	virtual int get_area() const { return 0;}
	virtual void draw() const {}
};

class Rect : public Shape 
{
public:
	// #1.
//	virtual void draw() const {}
//	void draw() const {}


	// #2. 
//	virtual int  get_area() {return 0;}
//	virtual void draw(int n) const {}

//	int  get_area() override {return 0;}
//	void draw(int n) const override {}

};

int main()
{
}
