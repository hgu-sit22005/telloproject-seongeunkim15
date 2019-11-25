#pragma once
#include "TelloPro.h"

class Flip: public TelloPro
{
public:
	Flip();
	Flip(int _Value);
public:
	double get_delay();
};
