#include <stdio.h>
#include <conio.h>
void main()
{
	char st[100];
	int i;
	clrscr();

	printf("\nENTER ANY STRING.... ");
	gets(st);

	for (i = 0; st[i] != '\0'; i++);

	printf("\nLENGTH OF ENTERED STRING = %d", i);

	getch();
}