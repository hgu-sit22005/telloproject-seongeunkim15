#include "flip.h"
#include <cstring>
#include <sstream> //cout과 같음 문자열로 출력
/*
Flip::Flip()
{
	
	std::stringstream sstream;
	//sstream << "flip" << _value;
	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
*/

Flip::Flip(int _value)
{
	std::stringstream sstream;
	switch(_value)
	{
	case 0:
		sstream <<"flip l";
		break;
	case 1:
		sstream <<"flip r";
		break;
	case 2:
		sstream <<"flip f";
		break;
	case 3:
	default:
		sstream <<"flip b";
		break;	
	}
	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());


}

double Flip::get_delay()
{ 
	return 2; 
}