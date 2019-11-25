#include "foward.h"
#include <cstring>
#include <sstream> //cout과 같음 문자열로 출력



Foward::Foward()
{
	command = new char[strlen("foward 20")+1];
	strcpy(command, "foward 20");
}

Foward::Foward(int _value)
{
	std::stringstream sstream;
	sstream << "foward " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}

double Foward::get_delay()
{ 
	return 5; 
}