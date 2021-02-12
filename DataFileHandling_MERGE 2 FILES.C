#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	FILE *fmain1, *fmain2, *ftmp;
	char ch, file1[40], file2[40], file3[80];
	clrscr();

	printf("\n\nENTER THE NAME OF 1ST FILE.....   ");
	gets(file1);

	printf("\n\nENTER THE NAME OF 2ND FILE.....   ");
	gets(file2);

	printf("\n\nENTER THE NAME OF MERGING FILE....   ");
	gets(file3);

	fmain1 = fopen(file1, "r");
	fmain2 = fopen(file2, "r");

	if (fmain1 == NULL || fmain2 == NULL)
	{
		printf("\n\nUNABLE TO OPEN FILE.....");
		exit(0);
	}

	ftmp = fopen(file3, "w");

	if (ftmp == NULL)
	{
		printf("\n\nUNABLE TO OPEN FILE......");
		exit(0);
	}

	while ((ch = fgetc(fmain1)) != EOF)
		fputc(ch, ftmp);

	while ((ch = fgetc(fmain2)) != EOF)
		fputc(ch, ftmp);

	printf("\n\nTWO FILES SUCCESSFULLY MERGED TO %s FILE....", file3);

	fclose(fmain1);
	fclose(fmain2);
	fclose(ftmp);

	getch();
}