#include <stdio.h>
#include <conio.h>
void main()
{
	int row, prod = 1, i, j, l;
	clrscr();

	printf("\n\nENTER NO. OF ROWS..... ");
	scanf("%d", &row);

	for (i = 0; i < row; i++)
	{
		for (l = 1; l <= row - i; l++)
			printf("  ");

		for (j = 0; j <= i; j++)
		{
			if (j == 0)
				prod = 1;

			else
				prod = prod * (i - j + 1) / j;

			printf("%4d", prod);
		}
		printf("\n");
	}

	getch();
}
