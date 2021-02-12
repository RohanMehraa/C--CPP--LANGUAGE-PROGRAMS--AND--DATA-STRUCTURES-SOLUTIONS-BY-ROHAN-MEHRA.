#include <stdio.h>
#include <conio.h>
#define PATTERN                  \
	for (i = 0; i < 5; i++)      \
	{                            \
		for (j = 0; j <= i; j++) \
		{                        \
			printf("%c", st[j]); \
		}                        \
		printf("\n");            \
	}                            \
	for (i = 5; i >= 0; i--)     \
	{                            \
		for (j = 0; j < i; j++)  \
			printf("%c", st[j]); \
		printf("\n");            \
	}

void main()
{
	char st[] = "COBOL";
	int i, j;
	clrscr();

	PATTERN

	getch();
}