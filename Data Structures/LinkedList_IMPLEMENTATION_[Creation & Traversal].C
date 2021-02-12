#include <stdio.h>
#include <conio.h>

struct node
{
	int data;
	struct node *link;
};

struct node *start = NULL;
static int count = 0;
int i;

void create()
{
	int item;
	struct node *ptr, *temp;

	clrscr();

	printf("\n\nENTER THE DATA VALUE   :   ");
	scanf("%d", &item);

	ptr = (struct node *)malloc(sizeof(struct node));
	ptr->data = item;
	//      ptr->link=NULL;

	if (start == NULL)
	{
		start = ptr;
		ptr->link = NULL;
		count++;
	}

	else
	{
		temp = start;

		while (temp->link != NULL)
			temp = temp->link;

		temp->link = ptr;
		ptr->link = NULL;
		count++;
	}

	printf("\n\nELEMENT ADDED TO THE LIST SUCCESSFULLY.........");
	getch();
}

void delete_loc()
{
	int n, loc;

	struct node *temp, *ptr;

	clrscr();

	if (start == NULL)
	{
		printf("\n\nLIST IS EMPTY, UNDERFLOW!!!");
		return;
	}

	printf("\nENTER ELEMENT'S LOCATION TO BE DELETED   :   ");
	scanf("%d", &loc);

	if (loc <= count)
	{
		if (start->link == NULL)
		{
			n = start->data;
			free(start);
			count--;
			start = NULL;

			printf("\n\nELEMENT - '%d' DELETED FROM LOCATION - %d OF THE LIST.......", n, loc);
		}

		//..........problem....................................................

		else
		{
			temp = start;

			for (i = 1; i < loc; i++) //problem!!!!!!
			{						  //if you delete the first node,
				ptr = temp;			  //then the whole list gets corrupt.
				temp = temp->link;	  //but to solve this, first we've to
			}						  //solve the problem with (Creation/Traversal) of L.dL.

			n = temp->data;
			ptr->link = temp->link;

			free(temp);
			count--;

			printf("\n\nELEMENT - '%d' DELETED FROM LOCATION - %d OF THE LIST.......", n, loc);
		}
	}

	else
		printf("\n\nINVALID LOCATION.......");
}

void traverse()
{
	struct node *ptr;
	clrscr();

	if (start == NULL)
		printf("\n\nLIST IS EMPTY, UNDERFLOW!!!");

	else
	{
		ptr = start;
		i = 1;

		//..............(WHICH IS BETTER, ALSO WHATS'S THE ERROR IN CODE!)...................

		while (ptr != NULL)					   //vs.// while(ptr->link != NULL)
		{									   // {
			printf("%d\t", ptr->data);		   //   printf("%d\t", ptr->data);
			ptr = ptr->link;				   //   ptr = ptr->link;
			printf("Node no   :   %d\n", i++); //   printf("Node no   :   %d\n", i++);
		}									   // }
											   // printf("%d\t", ptr->data);
	}
	getch();
}

void main()
{
	int ch;

	do
	{
		clrscr();

		printf("\n\n1. CREATE LIST");
		printf("\n\n2. TRAVERSE LIST");
		printf("\n\n3. DELETE A NODE");
		printf("\n\n4. TOTAL NO. OF ELEMENTS IN LIST");
		printf("\n\n5. EXIT");

		printf("\n\n\nENTER YOUR CHOICE   :   ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			create();
			break;

		case 2:
			traverse();
			break;

		case 3:
			delete_loc();
			getch();
			break;

		case 4:
			printf("\n\nTOTAL NO. OF ELEMENTS IN LIST   :   %d", count);
			getch();
			break;

		case 5:
			exit(0);

		default:
			printf("\n\nINVALID INPUT.....");
			getch();
		}

	} while (ch != 5);
}
