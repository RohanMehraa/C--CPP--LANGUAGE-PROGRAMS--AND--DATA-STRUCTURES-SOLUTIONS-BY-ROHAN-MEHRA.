#include <stdio.h>
#include <conio.h>
void main()
{
  int ar[20], i, j, siz, item, tmp, tmp2;
  clrscr();

  printf("\n\nENTER THE SIZE OF ARRAY YOU WANT (MAX. LIM. 20.... ");
  scanf("%d", &siz);

  if (siz > 20)
    printf("\n\nINVALID SIZE.....");

  else
  {
    printf("\n\nENTER THE ELEMENTS..... \n\n");
    for (i = 0; i < siz; i++)
      scanf("%d", &ar[i]);

    for (i = 0; i < siz - 1; i++)
    {
      for (j = i + 1; j < siz; j++)
      {
        if (ar[i] > ar[j])
        {
          tmp = ar[j];
          ar[j] = ar[i];
          ar[i] = tmp;
        }
      }
    }

    printf("\n\nENTER THE ELEMENT YOU WANT TO INSERT.... ");
    scanf("%d", &item);

    while (ar[i++] < item);

    tmp = ar[i];
    ar[i] = item;

    for (i = i + 1; i < siz + 1; i++)
    {
      tmp2 = ar[i];
      ar[i] = tmp;
      ar[i + 1] = tmp2;
    }

    printf("\n\nAFTER INSERTION, ELEMENTS ARE AS....\n\n");
    for (i = 0; i < siz + 1; i++)
      printf("%d\n", ar[i]);
  }

  getch();
}
