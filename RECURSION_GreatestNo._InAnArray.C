#include <stdio.h>
#include <conio.h>

void GRT(int ar[], int siz, int &gr, int &sm);

void main()
{
	int ar[20], i, siz, gr, sm;
	clrscr();

	printf("\n\nENTER SIZE OF ARRAY (MAX. LIMIT 20)....  ");
	scanf("%d", &siz);

	if (siz <= 20)
	{
		printf("\n\nENTER %d ELEMENTS....\n\n", siz);
		for (i = 0; i < siz; i++)
			scanf("%d", &ar[i]);

		printf("\n\n\nENTERED ELEMENTS ARE..... \n\n");
		for (i = 0; i < siz; i++)
			printf("%d ", ar[i]);

		gr = sm = ar[0];

		GRT(ar, siz - 1, gr, sm);

		printf("\n\n\nGREATEST NO. = %d", gr);
	}

	else
		printf("\n\nINVALID INPUT....");

	getch();
}

void GRT(int ar[], int siz, int &gr, int &sm)
{
	if (siz == 0)
		return gr;

	else if (siz > 0)
	{
		if (ar[siz] > gr)
			gr = ar[siz];

		else if (ar[siz] < sm)
			sm = ar[siz];

		return (GRT(ar, siz - 1, &gr, &sm));
	}
}