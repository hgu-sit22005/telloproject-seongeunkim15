#pragma once
#include "TelloPro.h"

class Foward: public TelloPro
{
public:
	Foward();
	Foward(int _value);
public:
	double get_delay();
};
