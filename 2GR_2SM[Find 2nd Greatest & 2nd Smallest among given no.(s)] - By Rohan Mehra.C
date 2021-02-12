#include <stdio.h>
#include <conio.h>
void main()
{
	int i = 1, num, gr, gr2, sm, sm2;
	clrscr();

	printf("\n\nEnter Any 5 Nos......\n\n");

	while (i <= 5)
	{
		scanf("%d", &num);

		if (i == 1)
			sm2 = sm = gr2 = gr = num;

		if (num > gr)
		{
			gr2 = gr;
			gr = num;
		}
		else if (num > gr2 && num < gr)
			gr2 = num;
		else if (gr == gr2)
			gr2 = num;

		if (num < sm)
		{
			sm2 = sm;
			sm = num;
		}
		else if (num < sm2 && num > sm)
			sm2 = num;
		else if (sm == sm2)
			sm2 = num;

		i = i + 1;
	}

	printf("\n\nSECOND SMALLEST NO. IS = %d.", sm2);
	printf("\n\nSECOND GREATEST NO. IS = %d.", gr2);

	getch();
}