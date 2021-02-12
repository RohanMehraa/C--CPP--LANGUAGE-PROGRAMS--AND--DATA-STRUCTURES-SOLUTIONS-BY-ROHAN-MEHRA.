#include <stdio.h>
#include <conio.h>
void main()
{
       int ar[50], siz, i, item;
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
                     ar[i] = 0;
       }

       printf("\n\n\nAFTER DELETING ELEMENTS ARE AS.... \n\n");
       for (i = 0; i < siz; i++)
              printf("%d\n", ar[i]);

       getch();
}