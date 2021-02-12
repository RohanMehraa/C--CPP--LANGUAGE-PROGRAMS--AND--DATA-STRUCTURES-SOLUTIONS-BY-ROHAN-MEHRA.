#include <iostream.h>
#include <conio.h>

int fact(int nm);
long double reslt(long double);

void main()
{
	int i, x;
	long double e = 0, sol = 1, num = 0, res, fct;
	clrscr();

	while (num <= 7)
	{
		fct = fact(num);
		res = reslt(fct);
		e = e + res;
		num++;
	}

	cout << "\n\nVALUE OF  'e'   :   " << e << endl;
	cout << "\n\nENTER THE VALUE OF EXPONENT(x)    :    ";
	cin >> x;

	for (i = 0; i < x; i++)
		sol = sol * e;

	cout << "\n\n[ e ^ x ]   :   " << e << " ^ " << x << "  =  " << sol << endl;

	getch();
}

int fact(int nm)
{
	int fct = 1;

	while (nm > 1)
		fct = fct * nm--;

	return fct;
}

long double reslt(long double fct)
{
	long double rs;
	rs = 1 / fct;
	return rs;
}