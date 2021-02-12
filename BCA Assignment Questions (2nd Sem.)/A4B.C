#include <stdio.h>
#include <conio.h>

struct course
{
	int tee, ass;
	int teetot, asstot;
};

void main()
{
	struct course c[4];
	int i, tastot;
	int per, peras;
	clrscr();

	printf("\nENTER MARKS OF 4 COURSES....");

	for (i = 0; i < 4; i++)
	{
		printf("\nENTER DETAILS OF COURSE - %d", i + 1);

		printf("\nENTER MARKS OBTAINED IN TEE OF COURSE - %d : ", i + 1);
		scanf("%d", &c[i].tee);

		printf("\nENTER TOTAL MARKS OF TEE OF COURSE - %d : ", i + 1);
		scanf("%d", &c[i].teetot);

		printf("\nENTER MARKS OBTAINED IN ASSIGNMENT OF COURSE - %d : ", i + 1);
		scanf("%d", &c[i].ass);

		printf("\nENTER TOTAL MARKS FOR ASSIGNMENT OF COURSE - %d : ", i + 1);
		scanf("%d", &c[i].asstot);

		printf("\nDETAILS OF COURSE - %d SAVED SUCCESSFULLY....", i + 1);
	}

	clrscr();

	printf("\nDETAILS OF ALL 4 SUBJECTS ARE AS FOLLOWS.... ");

	for (i = 0; i < 4; i++)
	{
		printf("\nCOURSE - %d", i + 1);

		printf("\nMARKS OBTAINED = %d/%d", c[i].tee, c[i].teetot);

		per = (c[i].tee / c[i].teetot) * 100;

		peras = (c[i].ass / c[i].asstot) * 100;

		printf("\nPERCENTAGE OF TEE = %d", per);

		printf("\nPERCENTAGE OF ASSIGNMENT = %d", peras);

		if (per < 40)
			printf("\nGRADE IN TEE = E");

		else if (per < 50 && per >= 40)
			printf("\nGRADE IN TEE = D");

		else if (per < 60 && per >= 50)
			printf("\nGRADE IN TEE = C");

		else if (per < 75 && per >= 60)
			printf("\nGRADE IN TEE = B");

		else if (per >= 75)
			printf("\nGRADE IN TEE = A");

		if (peras < 40)
			printf("\nGRADE IN ASSIGNMENT = E");

		else if (peras < 50 && peras >= 40)
			printf("\nGRADE IN ASSIGNMENT = D");

		else if (peras < 60 && peras >= 50)
			printf("\nGRADE IN ASSIGNMENT = C");

		else if (peras < 75 && peras >= 60)
			printf("\nGRADE IN ASSIGNMENT = B");

		else if (peras >= 75)
			printf("\nGRADE IN ASSIGNMENT = A");

		printf("\n");
	}

	getch();
}