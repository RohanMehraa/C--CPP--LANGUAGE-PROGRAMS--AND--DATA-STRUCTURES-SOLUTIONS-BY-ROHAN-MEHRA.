#include <stdio.h>
#include <conio.h>

void main()
{
	int ar[100], i, j, lim, item;
	int beg, mid, end, temp, loc;
	clrscr();

	printf("\n\nENTER THE SIZE OF ARRAY YOU WANT   :   ");
	scanf("%d", &lim);

	printf("\n\nENTER  '%d'-ELEMENTS(IN INCREASING ORDER......\n\n", lim);
	for (i = 0; i < lim; i++)
		scanf("%d", &ar[i]);

	for (i = 0; i < lim - 1; i++)
		for (j = i + 1; j < lim; j++)
			if (ar[i] > ar[j])
			{
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}

	printf("\n\nENTER THE ELEMENT TO BE SEARCHED   :   ");
	scanf("%d", &item);

	beg = 0;
	loc = -1;
	end = lim - 1;

	while (beg <= end && loc == -1)
	{
		mid = (beg + end) / 2;

		if (ar[mid] == item)
			loc = mid;

		else if (ar[mid] < item)
			beg = mid + 1;

		else
			end = mid - 1;
	}

	if (loc > -1)
		printf("\n\nELEMENT FOUND, THE LOCATION IS  :  %d", ++loc);

	else
		printf("\n\nELEMENT NOT FOUND......");

	getch();
}