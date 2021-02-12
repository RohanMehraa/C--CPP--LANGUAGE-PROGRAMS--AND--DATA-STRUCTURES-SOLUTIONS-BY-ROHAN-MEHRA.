#include <stdio.h>
#include <conio.h>
void main()
{
	int ar[20], are[20], aro[20], i, evn = 0, odd = 0, siz;
	clrscr();

	printf("\n\nENTER THE SIZE OF ARRAY YOU WANT (MAX. LIMIT 20)....  ");
	scanf("%d", &siz);

	if (siz <= 20)
	{
		printf("\n\nENTER %d ELEMENTS.....\n\n", siz);
		for (i = 0; i < siz; i++)
		{
			scanf("%d", &ar[i]);

			if (ar[i] % 2 == 0)
				are[evn++] = ar[i];

			else
				aro[odd++] = ar[i];
		}

		printf("\n\nENTERED ELEMENTS ARE....\n\n");
		for (i = 0; i < siz; i++)
			printf("%d ", ar[i]);

		printf("\n\n\nEVEN ELEMENTS ARE....\n\n");
		for (i = 0; i < evn; i++)
			printf("%d ", are[i]);

		printf("\n\n\nODD ELEMENTS ARE....\n\n");
		for (i = 0; i < odd; i++)
			printf("%d ", aro[i]);
	}

	else
		printf("\n\nINVALID INPUT....");

	getch();
}
