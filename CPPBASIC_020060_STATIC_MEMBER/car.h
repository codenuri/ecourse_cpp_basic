// car.h
#pragma once

class Car
{	
	int color;
	int speed;
public:	
	static int count;
	
	Car(int c, int s);
	~Car();
};
