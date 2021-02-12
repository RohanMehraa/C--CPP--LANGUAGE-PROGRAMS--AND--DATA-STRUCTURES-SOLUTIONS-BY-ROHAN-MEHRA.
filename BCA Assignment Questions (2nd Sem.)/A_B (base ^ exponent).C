#include <stdio.h>
#include <conio.h>

void main()
{
	long int base, exp, sol = 1, i, n;
	clrscr();

	printf("\nENTER THE VALUE OF BASE  :  ");
	scanf("%ld", &base);

	printf("\nENTER THE VALUE OF EXPONENT  :  ");
	scanf("%ld", &exp);

	n = exp / 2;

	for (i = 0; i < n; i++)
		sol = sol * base;
	sol = sol * sol;

	if (exp % 2 != 0)
		sol = sol * base;

	printf("\n (%ld)^(%ld) = %ld", base, exp, sol);

	getch();
}
