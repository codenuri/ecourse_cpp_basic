#include <print>

struct ICamera 
{

	virtual void take() = 0;

	virtual ~ICamera() {}
};

class People 
{
public:
	void use_camera(ICamera* c) { c->take(); }
};


class Camera : public ICamera
{
public:
	void take() { std::println("take picture");}
};

class HDCamera : public ICamera
{
public:
	void take() { std::println("take HD picture");}
};

class UHDCamera : public ICamera
{
public:
	void take() { std::println("take UHD picture");}
};

int main()
{
	People p;
	Camera c;

	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc);

	UHDCamera uhc;
	p.use_camera(&uhc);	
}