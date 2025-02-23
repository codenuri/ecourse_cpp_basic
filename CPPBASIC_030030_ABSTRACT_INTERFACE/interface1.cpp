#include <print>

class Camera 
{
public:
	void take() { std::println("take picture");}
};

class HDCamera 
{
public:
	void take() { std::println("take HD picture");}
};

class People 
{
public:
	void use_camera(Camera* c) { c->take(); }
	void use_camera(HDCamera* c) { c->take(); }
};

int main()
{
	People p;
	Camera c;

	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc);
}