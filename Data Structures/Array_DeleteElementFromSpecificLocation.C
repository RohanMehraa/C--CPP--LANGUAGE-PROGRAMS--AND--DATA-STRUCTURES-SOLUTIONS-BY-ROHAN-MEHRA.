#include <stdio.h>
#include <conio.h>
void main()
{
  int ar[50], siz, i, j, item;
  clrscr();

  printf("\n\nENTER THE SIZE OF ARRAY YOU WANT (MAX. LIMIT 50)...... ");
  scanf("%d", &siz);

  printf("\n\n\nENTER THE ELEMENTS......\n\n");

  for (i = 0; i < siz; i++)
    scanf("%d", &ar[i]);

  printf("\n\nENTER THE ELEMENT YOU WANT TO DELETE.... ");
  scanf("%d", &item);

  for (i = 0; i < siz; i++)
  {
    if (ar[i] == item)
    {
      for (j = i; j < siz; j++)
        ar[i] = ar[i + 1];
      break;
    }
  }

  printf("\n\n\nAFTER DELETING ELEMENTS ARE AS.... \n\n");
  for (i = 0; i < siz - 1; i++)
    printf("%d\n", ar[i]);

  getch();
}