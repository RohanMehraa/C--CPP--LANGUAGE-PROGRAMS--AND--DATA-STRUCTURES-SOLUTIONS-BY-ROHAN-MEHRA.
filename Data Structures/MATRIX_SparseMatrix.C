#include <stdio.h>
#include <conio.h>
void main()
{
	int ar[20][20], i, j, row, col, zero = 0;
	clrscr();

	printf("\n\nENTER THE SIZE OF MATRIX (MAX. LIMIT 20X20).....");
	printf("\n\nROW :  ");
	scanf("%d", &row);
	printf("\nCOLUMN :  ");
	scanf("%d", &col);

	if (row <= 20 && col <= 20)
	{
		printf("\n\n\nENTER THE ELEMENTS....\n\n");

		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				scanf("%d", &ar[i][j]);

				if (ar[i][j] == 0)
					zero++;
			}
		}

		printf("\n\n\nENTERED MATRIX.....\n\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				printf("%d ", ar[i][j]);
			printf("\n");
		}

		if (zero > row * col / 2)
			printf("\nIS A SPARSE MATRIX.....");

		else
			printf("\nIS NOT A SPARSE MATRIX.....");
	}

	else
		printf("\n\nINVALID INPUT......");

	getch();
}
