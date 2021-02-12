#include <stdio.h>
#include <conio.h>
void main()
{
	int ar[5], i, r, smd = 0;
	clrscr();

	printf("\n\nENTER THE ELEMENTS......\n\n");

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &ar[i]);

		while (ar[i] > 0)
		{
			r = ar[i] % 10;
			smd = smd + r;
			ar[i] = ar[i] / 10;

			if (ar[i] == 0 && smd > 9)
			{
				ar[i] = smd;
				smd = 0;
			}
		}

		ar[i] = smd;
	}

	printf("\n\nELEMENTS AFTER APPLYING OPERATION ARE AS.....\n\n");

	for (i = 0; i < 5; i++)
		printf("%4d", ar[i]);

	getch();
}