#include <stdio.h>
#include <conio.h>
#include <system.h>
#include <stdlib.h>
void main()
{
  FILE *fp, *ft;
  char ch;

  fp = fopen("FILE1.TXT", "r");

  if (fp == NULL)
  {
    printf("\nUNABLE TO OPEN SOURCE FILE....");
    getch();

    exit(1) l
  }

  ft = fopen("FILE2.TXT", "w");

  if (ft == NULL)
  {
    printf("\nUNABLE TO OPEN TARGET FILE....");
    getch();

    exit(2);
  }

  while (1)
  {
    ch = fgetc(fp);

    if (ch == EOF)
      break;

    else
      fputc(ch, ft);
  }

  printf("\nSOURCE FILE COPIED TO TARGET FILE....");

  fclose(fp);

  fclose(ft);

  getch();
}