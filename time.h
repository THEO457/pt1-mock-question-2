#include <isostream>
#ifndef TIME_H
#define TIME_H
using namespace std;
class Time
{
private:
	int h;
	int m;
public:
	
	Time(int h, int m);
	~Time();
	void set(int h, int m);
	void get(int &h, int &m);
	friend ostream &operator<<(ostream &, const Time &);
	Time operator++(int);
};
#endif

