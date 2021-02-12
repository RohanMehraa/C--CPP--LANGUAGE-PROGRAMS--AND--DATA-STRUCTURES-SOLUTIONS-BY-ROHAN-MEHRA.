#include <stdio.h>
#include <conio.h>
void main()
{
	int mrk[10], i, gr;
	clrscr();

	printf("\nENTER MARKS OF 10 STUDENTS....\n");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &mrk[i]);

		if (i == 0)
			gr = mrk[i];

		else if (mrk[i] > gr)
			gr = mrk[i];
	}

	printf("\nMARKS OF 10 STUDENTS ARE AS FOLLOWS....\n");
	for (i = 0; i < 10; i++)
		printf("%d ", mrk[i]);

	printf("\nHIGHEST MARKS = %d", gr);

	getch();
}