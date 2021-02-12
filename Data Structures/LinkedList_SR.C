#include <stdio.h>
#include <conio.h>

struct node
{
	int info;
	struct node *link;
};

struct node *start = NULL;

int i;

void insert_beg(int item)
{
	struct node *ptr;

	ptr = (struct node *)malloc(sizeof(struct node));

	ptr->info = item;

	if (start == NULL)
	{
		start = ptr;
		ptr->link = NULL;
	}

	else
	{
		ptr->link = start;
		start = ptr;
	}
}

void insert_end(int item)
{
	struct node *ptr, *temp;

	ptr = (struct node *)malloc(sizeof(struct node));

	ptr->info = item;

	if (start == NULL)
	{
		start = ptr;
		ptr->link = NULL;
	}

	else
	{
		temp = start;

		while (temp->link != NULL)
			temp = temp->link;

		temp->link = ptr;
		ptr->link = NULL;
	}
}

void insert_loc(int item, int loc)
{
	struct node *ptr, *temp, *save;

	ptr = (struct node *)malloc(sizeof(struct node));

	ptr->info = item;

	if (start == NULL)
	{
		start = ptr;
		ptr->link = NULL;
	}

	else
	{
		temp = start;

		for (i = 0; i < loc; i++)
		{
			save = temp;
			temp = temp->link;
		}

		save->link = ptr;
		ptr->link = temp;
	}
}

int delete_beg()
{
	int n;

	struct node *temp;

	if (start == NULL)
	{
		printf("\n\nLIST IS EMPTY : UNDER FLOW!!!");
		return 0;
	}

	n = start->info;
	temp = start->link;

	free(start);

	start = temp;

	printf("\n\nELEMENT - '%d' DELETED FROM THE BEGINING OF THE LIST.......", n);

	return 0;
}

int delete_end()
{
	int n;

	struct node *temp, *ptr;

	if (start == NULL)
	{
		printf("\n\nLIST IS EMPTY, UNDERFLOW!!!...");
		return 0;
	}

	if (start->link == NULL)
	{
		n = start->info;
		temp = start->link;

		free(start);

		start = NULL;
	}

	else
	{
		temp = start;

		while (temp->link != NULL)
		{
			ptr = temp;
			temp = temp->link;
		}

		n = temp->info;
		ptr->link = NULL;

		free(temp);
	}

	printf("\n\nELEMENT - '%d' DELETED FROM THE END OF THE LIST.......", n);

	return 0;
}

int delete_loc(int loc)
{
	int n;

	struct node *temp, *ptr;

	if (start == NULL)
	{
		printf("\n\nLIST IS EMPTY, UNDERFLOW!!!");
		return 0;
	}

	if (start->link == NULL)
	{
		n = start->info;
		free(start);
		start = NULL;
	}

	else
	{
		temp = start;

		for (i = 0; i < loc; i++)
		{
			ptr = temp;
			temp = temp->link;
		}

		n = temp->info;
		ptr->link = temp->link;

		free(temp);
	}

	printf("\n\nELEMENT - '%d' DELETED FROM LOCATION - %d OF THE LIST.......", n, loc);

	return 0;
}

void traverse()
{
	struct node *temp;

	if (start == NULL)
	{
		printf("\n\nLIST IS EMPTY, UNDERFLOW!!!");
		return;
	}

	else
	{
		temp = start;

		printf("\n\n\nLIST IS...............\n\n");

		while (temp->link != NULL)
		{
			printf("%d  ", temp->info);
			temp = temp->link;
		}

		printf("%d  ", temp->info);
	}
}

void main()
{
	int ch, item, loc, n;
	char c;

	clrscr();

	do
	{
		clrscr();

		printf("\n..................... M E N U .........................\n");
		printf("\n\n1. INSERTION IN BEGINNING");
		printf("\n\n2. INSERTION IN END");
		printf("\n\n3. INSERTION IN DESIRED LOCATION");
		printf("\n\n4. DELETION FROM BEGINNING");
		printf("\n\n5. DELETION FROM END");
		printf("\n\n6. DELETION FROM DESIRED LOCATION");
		printf("\n\n7. TRAVERSAL");
		printf("\n\n8. EXIT");

		printf("\n\n\nENTER YOUR SELECTION...[1.....8]    :   ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			clrscr();
			printf("\nENTER ELEMENT TO INSERT   :   ");
			scanf("%d", &item);

			insert_beg(item);

			break;

		case 2:
			clrscr();
			printf("\nENTER ELEMENT TO INSERT   :   ");
			scanf("%d", &item);

			insert_end(item);

			break;

		case 3:
			clrscr();
			printf("\nENTER ELEMENT TO INSERT   :   ");
			scanf("%d", &item);

			printf("\nENTER THE LOCATION   :   ");
			scanf("%d", &loc);

			insert_loc(item, loc);

			break;

		case 4:
			clrscr();
			delete_beg();

			getch();

			break;

		case 5:
			clrscr();
			delete_end();

			getch();

			break;

		case 6:
			clrscr();
			printf("\nENTER ELEMENT'S LOCATION TO BE DELETED   :   ");
			scanf("%d", &loc);

			delete_loc(loc);

			getch();

			break;

		case 7:
			clrscr();
			traverse();
			getch();

			break;

		case 8:
			exit(0);

		default:
			printf("\n\nINVALID SELECTION.....");
			getch();
		}

	} while (ch != 8);
}
