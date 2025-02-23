// Car.cpp
#include "Car.h"

int Car::count{0};

Car::Car(int c, int s) : color{c}, speed{s} { ++count; }

Car::~Car() { --count; }
