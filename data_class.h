#ifndef DATA_CLASS_H
#define DATA_CLASS_H

#include <std_lib_facilities.h>
#include <math.h>
//..
class get_the
{
public:
	double a, b, c;
	get_the(double asq = 0, double bsq = 0, double csq = 0) :
		c(sqrt((asq * asq) + (bsq * bsq))),
		b(sqrt((csq * csq) - (asq * asq))),
		a(sqrt((csq * csq) - (bsq * bsq)))  {}
	//After writing this Class, I've found anouther love for C++...
	//this. Classes are really cool IMO, and did not understand Classes
	//till I played around with the C++ rules and came up with this...
	//used the bottom up approach, the problem being self-taught from textbooks.
};
//..
#endif//DATA_CLASS_H
