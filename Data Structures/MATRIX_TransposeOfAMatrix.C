#include <stdio.h>
#include <conio.h>
void main()
{
	int ar[3][3], i, j, tmp;
	clrscr();

	printf("Enter the Matrix.. ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &ar[i][j]);
	}
	
	clrscr();
	
	printf("\n\n Before Transpose.. \n\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf(" %d", ar[i][j]);
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < i; j++)
		{
			tmp = ar[j][i];
			ar[j][i] = ar[i][j];
			ar[i][j] = tmp;
		}
	}

	printf("\n\n After Transpose.. \n\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf(" %d", ar[i][j]);
		printf("\n");
	}
	
	getch();
}
