#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j, n, a = 1, b = 0, c;
	clrscr();
	printf("\n\n\n\n");

	for (i = 1; i <= 7; i += 2)
	{
		for (n = 5; n >= i; n -= 2)
			printf("   ");

		for (j = 1; j <= i; j++)
		{
			if (i == 7)
				printf("%d ", b);

			else if (j == 1 || j == i)
				printf(" %d  ", b);

			else
				printf("   ");

			c = a + b;
			a = b;
			b = c;
		}
		printf("\n");
	}
	getch();
}