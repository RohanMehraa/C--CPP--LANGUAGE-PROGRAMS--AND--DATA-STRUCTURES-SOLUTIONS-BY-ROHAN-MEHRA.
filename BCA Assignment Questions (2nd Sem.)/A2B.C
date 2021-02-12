#include <stdio.h>
#include <conio.h>
void main()
{
	int fare, disc, tot, age;
	clrscr();

	printf("\nENTER BASIC FARE FOR AIR TICKET....");
	scanf("%d", &fare);

	printf("\nENTER AGE OF PASSENGER....");
	scanf("%d", &age);

	if (age < 14)
		disc = fare * (0.5);

	else if (age > 50)
		disc = fare * (0.2);

	else if (age >= 14 && age <= 50)
		disc = fare * (0.1);

	tot = fare - disc;

	printf("\nFARE AFTER DEDUCTING RESPECTIVE DISCOUNT = %d", tot);

	getch();
}