#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char st1[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	char st2[] = {'J', 'K', 'L', 'M', 'N'};
	int j, len, comp, exec = 0;
	clrscr();

	len = strlen(st1);

	for (j = 0, comp = 1; st2[j] != '\0'; j++, comp++)
	{
		st1[len++] = st2[j];
		exec++;
	}
	st1[len] = '\0';

	printf("\n\nAFTER CONCATENATION, STRING IS.......\n\n");
	printf("\n%s", st1);

	printf("\n\n\n\nNO. OF TIMES LOOP EXECUTED  :   %d", exec);
	printf("\n\nNO. OF TIMES COMPARISON MADE  :   %d", comp);

	getch();
}
