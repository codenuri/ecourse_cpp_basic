#include <print>

class Camera 
{
public:
	void take() { std::println("take picture");}
};

class People 
{
public:
	void use_camera(Camera* c) { c->take(); }
};

int main()
{
	People p;
	Camera c;

	p.use_camera(&c);
}