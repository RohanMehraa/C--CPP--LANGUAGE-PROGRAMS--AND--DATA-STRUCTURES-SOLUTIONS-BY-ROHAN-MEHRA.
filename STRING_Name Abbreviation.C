#include <stdio.h>
#include <conio.h>
void main()
{
	char st[40];
	int i, j, pos;
	clrscr();

	printf("\n\nENTER ANY STRING.....\n");
	gets(st);

	for (j = 0; st[j] != '\0'; j++);

	for (j = j - 1; j >= 0; j--)
	{
		if (st[j] == ' ')
		{
			pos = j;
			break;
		}
	}

	for (i = 0; st[i] != '\0'; i++)
	{
		if (i == 0)
			printf("%c.", st[i]);

		if (st[i] == ' ' && i != pos)
			printf("%c.", st[i + 1]);

		else if (i >= pos)
			printf("%c", st[i]);
	}

	getch();
}