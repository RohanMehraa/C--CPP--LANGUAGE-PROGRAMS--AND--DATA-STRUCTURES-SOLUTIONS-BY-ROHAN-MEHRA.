#include <stdio.h>
#include <conio.h>

void main()
{
	int ar[100], i, j, temp, lim;
	clrscr();

	printf("\n\nENTER THE SIZE OF ARRAY YOU WANT(MAX. LIMIT 100)  :  ");
	scanf("%d", &lim);

	printf("\n\nENTER '%d'-ELEMENTS........\n\n", lim);
	for (i = 0; i < lim; i++)
		scanf("%d", &ar[i]);

	for (i = 1; i < lim; i++)
	{
		temp = ar[i];
		j = i - 1;

		while (temp < ar[j] && j >= 0)
		{
			ar[j + 1] = ar[j];
			j--;
		}

		ar[j + 1] = temp;
	}

	printf("\n\nAFTER SORTING.....");
	for (i = 0; i < lim; i++)
		printf("%d ", ar[i]);

	getch();
}