#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	char another, choice;

	struct stud
	{
		char nm[30];
		int roll;
		float per;
	};

	struct stud st;
	char stdnm[30];
	long int recsize;
	int flag, i;

	fp = fopen("STUD.DAT", "rb+");

	if (fp == NULL)
	{
		fp = fopen("STUD.DAT", "wb+");

		if (fp == NULL)
		{
			printf("\nUNABLE TO OPEN FILE....");
			exit(1);
		}
	}

	recsize = sizeof(st);

	while (1)
	{
		clrscr();

		gotoxy(30, 7);
		printf("\n1.) ADD RECORDS....");

		gotoxy(30, 9);
		printf("\n2.) DISPLAY RECORDS....");

		gotoxy(30, 11);
		printf("\n3.) MODIFY/UPDATE RECORDS....");

		gotoxy(30, 13);
		printf("\n4.) EXIT....");

		gotoxy(30, 17);
		printf("\nENTER YOUR CHOICE....  ");

		fflush(stdin);
		choice = getche();

		switch (choice)
		{
		case '1':
			fseek(fp, 0, SEEK_END);

			another = 'Y';

			while (another == 'Y' || another == 'y')
			{
				printf("\n\n\nENTER THE NAME OF STUDENT (IN CAPITAL LETTERS)  :  ");
				gets(st.nm);

				printf("\nENTER ROLL NO. OF STUDENT  :  ");
				scanf("%d", &st.roll);

				printf("\nENTER PERCENTAGE  :  ");
				scanf("%f", &st.per);

				fwrite(&st, recsize, 1, fp);

				printf("\n\n\n\nADD ANOTHER RECORD (Y/N) ?");
				fflush(stdin);
				another = getche();
			}
			break;

		case '2':
			clrscr();

			rewind(fp);

			gotoxy(4, 3);
			printf("ROLL NO.");

			gotoxy(18, 3);
			printf("STUDENT'S NAME");

			gotoxy(53, 3);
			printf("PERCENTAGE");

			i = 5;

			while (fread(&st, recsize, 1, fp) == 1)
			{
				gotoxy(4, i);
				printf("%d", st.roll);

				gotoxy(18, i);
				printf("%s", st.nm);

				gotoxy(53, i);
				printf("%f", st.per);

				i++;
			}

			getch();

			break;

		case '3':
			another = 'Y';

			while (another == 'Y' || another == 'y')
			{
				clrscr();

				printf("\n\nENTER NAME OF STUDENT TO MODIFY (IN CAPITAL LETTERS)  :  ");
				gets(stdnm);

				rewind(fp);

				while (fread(&st, recsize, 1, fp) == 1)
				{
					flag = 0;

					if (strcmp(st.nm, stdnm) == 0)
					{
						flag = 1;
						clrscr();

						printf("\n\n\nENTER NEW NAME (IN CAPITAL LETTERS) :  ");
						gets(st.nm);

						printf("\nENTER NEW ROLL NO.  :  ");
						scanf("%d", &st.roll);

						printf("\nENTER NEW PERCENTAGE  :  ");
						scanf("%f", &st.per);

						fseek(fp, -recsize, SEEK_CUR);
						fwrite(&st, recsize, 1, fp);

						break;
					}
				}

				if (flag == 0)
					printf("\nRECORD NOT FOUND....");

				printf("\n\n\nMODIFY / UPDATE  ANOTHER RECORD ?   :   ");
				fflush(stdin);
				another = getche();
			}

			break;

		case '4':
			fclose(fp);
			exit(0);

		default:
			printf("\n\nINVALID CHOICE......");
		}
	}
}
