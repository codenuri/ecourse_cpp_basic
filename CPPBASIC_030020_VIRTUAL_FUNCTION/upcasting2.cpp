class Shape 
{ 
public:  
	int color;
};
class Rect : public Shape 
{ 
public:
	 int x, y, width, height;
};

int main()
{
	Shape s;
    Rect  rc;

	Shape* p = &rc;

//	if ( 사용자 입력 == 1 ) p = &s;

	p->color = 10;  // ok
	p->width = 10;  // error


	Rect* prect = static_cast<Rect*>(p);

	prect->width = 10; // ok
}



