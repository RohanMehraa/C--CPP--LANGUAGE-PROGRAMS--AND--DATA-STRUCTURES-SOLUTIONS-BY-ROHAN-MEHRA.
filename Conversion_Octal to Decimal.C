#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int oct, dec = 0, r, i = 0, tmp;
	clrscr();

	printf("\n\n\tENTER ANY OCTAL NO......  ");
	scanf("%d", &oct);

	tmp = oct;

	while (oct > 0)
	{
		r = oct % 10;
		dec = dec + r * pow(8, i++);
		oct = oct / 10;
	}

	printf("\n\n\t%d (OCTAL)  =  %d (DECIMAL)", tmp, dec);

	getch();
}
