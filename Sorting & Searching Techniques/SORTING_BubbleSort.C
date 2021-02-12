#include <stdio.h>
#include <conio.h>

void bubble(int arr[], int lim);

void main()
{
	int ar[100], i, lim;
	clrscr();

	printf("\n\nENTER THE SIZE OF ARRAY YOU WANT (MAX. - 100)   :   ");
	scanf("%d", &lim);

	printf("\n\n\nENTER  '%d' - ELEMENTS......\n\n", lim);
	for (i = 0; i < lim; i++)
		scanf("%d", &ar[i]);

	clrscr();

	printf("\nBEFORE APPLYING SORTING, ELEMENTS ARE AS FOLLOWS..............\n\n");
	for (i = 0; i < lim; i++)
		printf("%d  ", ar[i]);

	printf("\n\n_______________________  BUBBLE  SORT  _______________________");
	bubble(ar, lim);
	printf("\n______________________________________________________________");

	printf("\n\n\nAFTER APPLYING SORTING, ELEMENTS ARE AS FOLLOWS...............\n\n");
	for (i = 0; i < lim; i++)
		printf("%d  ", ar[i]);

	getch();
}

void bubble(int arr[], int lim)
{
	int i, j, k, temp, count;

	for (i = 0; i < lim; i++)
	{
		count = 1;

		for (j = 0; j < lim - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}

			else
				count++;
		}

		if (count < lim)
		{
			printf("\n\n");
			for (k = 0; k < lim; k++)
				printf("  %d", arr[k]);
			printf("\t --\tPASS-'%d' COMPLETED!! ", i + 1);
		}

		if (count == lim - 1)
			break;
	}
}
