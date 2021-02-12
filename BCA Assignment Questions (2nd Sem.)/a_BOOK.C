#include <stdio.h>
#include <conio.h>
struct book
{
	char bnm[12];
	char anm[12];
	int pages;
	float price;
};

void main()
{
	struct book b[10];
	int i;
	clrscr();

	printf("\n\nENTER BOOK DETAILS.....");

	for (i = 0; i < 10; i++)
	{
		clrscr();

		printf("\n\nENTER DETAILS FOR BOOK-%d", i + 1);

		printf("\n\nBOOK TITLE  :  ");
		gets(b[i].bnm);

		printf("\n\nAUTHOR NAME  :  ");
		gets(b[i].anm);

		printf("\n\nNO. OF PAGES  :  ");
		scanf("%d", &b[i].pages);

		printf("\n\nPRICE  :  ");
		scanf("%f", &b[i].price);

		printf("\n\n\nDETAILS OF BOOK-%d SAVED SUCCESSFULLY.....");
	}

	clrscr();
	printf("\m\nBOOK DETAILS.....");

	for (i = 0; i < 10; i++)
	{
		printf("\n\n\nBOOK - %d", i + 1);

		printf("\n\nBOOK TITLE  :  %s", b[i].bnm);
		printf("\n\nAUTHOR NAME  :  %s", b[i].anm);
		printf("\n\nNO. OF PAGES  :  %d", b[i].pages);
		printf("\n\nPRICE  :  %f", b[i].price);
	}

	getch();
}