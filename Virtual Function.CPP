#include <iostream.h>
#include <conio.h>

class car
{
public:
	virtual void shift()
	{
		int a = 10;
		cout << a << endl;
	}
};

class sportscar : public car
{
public:
	void shift()
	{
		int b = 20;
		cout << b << endl;
	}
};

void main()
{
	car *p;
	sportscar o1;
	clrscr();

	p = &o1;

	o1.shift();
	p->shift();

	getch();
}