#include <stdio.h>
#include <conio.h>
void main()
{
	int ar[20], i, sm = 0, siz;
	int *pt;
	clrscr();

	printf("\n\nENTER THE SIZE OF ARRAY YOU WANT (MAX. LIMIT 20)....  ");
	scanf("%d", &siz);

	if (siz <= 20)
	{
		printf("\n\nENTER %d ELEMENTS.....\n\n", siz);

		for (i = 0; i < siz; i++)
			scanf("%d", &ar[i]);

		pt = ar;

		for (i = 0; i < siz; i++)
		{
			sm = sm + *pt;
			pt++;
		}

		printf("\n\nENTERED ELEMENTS ARE.....\n\n");
		for (i = 0; i < siz; i++)
			printf("%d ", ar[i]);

		printf("\n\nSUM OF ENTERED ELEMENTS = %d", sm);
	}

	else
		printf("\n\nINVALID INPUT....");

	getch();
}