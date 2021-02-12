#include <stdio.h>
#include <conio.h>
int main()
{
	char st[40];
	int i, j, nol = 1, nocl = 0, nosl = 0;
	// clrscr();

	printf("\n\nENTER ANY STRING......\n\n");
	gets(st);

	for (i = 0; st[i] != '\0'; i++)
	{
		if (st[i] >= 65 && st[i] <= 90)
			nocl++;

		else if (st[i] >= 97 && st[i] <= 122)
			nosl++;
	}

	for (i = 0; st[i] != '\0'; i++)
	{
		for (j = i + 1; st[j] != '\0'; j++)
		{
			if (st[i] == st[j] || st[i] - 32 == st[j] || st[i] + 32 == st[j])
			{
				nol++;
				st[j] = '0';
			}
		}

		if (st[i] != '0')
			printf("\n\t%c  -  %d", st[i], nol);

		nol = 1;
	}

	printf("\n\n%d  CAPITAL  LETTERS ......", nocl);
	printf("\n\n%d  SMALL  LETTERS......", nosl);

	getch();
	return 0;
}