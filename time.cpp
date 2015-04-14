#include <iostream>
#include "Time.h" //******always after iostream for friendhsip to work
#include <string>
using namespace std;


time::time()
{
	h = 0;
	m = 0;
}


time::~time()
{
}

Time::Time(int x, int y)
{
	h = x;
	m = y;
}
void Time::set(int x, int y) //mutator
{
	h = x;
	m = y;
}
void Time::get(int &x, int &y) //accessor
{
	x = h;
	y = m;
}
ostream& operator<<(ostream& out, const Time& T)
{
	if (T.m == 0)
	{ //produces an extra 0 for better looking output
		out << T.h << ":" << T.m << 0 << endl;
	}
	else
	{
		out << T.h << ":" << T.m << endl;
	}
	return out;
}
Time Time::operator++(int)
{
	Time Temp(h, m);
	if (m == 59) //increments the hour upon going above m=59
	{
		h++;
		m = 00;
	}
	else
	{
		m++;
	}
	if (h > 23)
	{
		h = 00;
	}
	return Temp;
}