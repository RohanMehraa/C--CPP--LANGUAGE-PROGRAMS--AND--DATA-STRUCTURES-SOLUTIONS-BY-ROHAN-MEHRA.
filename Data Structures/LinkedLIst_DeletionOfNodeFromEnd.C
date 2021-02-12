#include <stdio.h>
#include <conio.h>

struct node
{
	struct node *back;
	int data;
	struct node *front;
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
		ptr->back = NULL;
		ptr->front = NULL;
		count++;
	}

	else
	{
		temp = start;

		while (temp->front != NULL)
			temp = temp->front;

		temp->front = ptr;
		ptr->back = temp;
		ptr->front = NULL;
		count++;
	}

	printf("\n\nELEMENT ADDED TO THE LIST SUCCESSFULLY.........");
	getch();
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

	if (start->front == NULL)
	{
		n = start->info;
		temp = start->front;

		free(start);
		count--;

		start = NULL;
	}

	else
	{
		temp = start;

		while (temp->front != NULL)
		{
			ptr = temp;
			temp = temp->front;
		}

		n = temp->info;
		ptr->front = NULL;

		free(temp);
		count--;
	}

	printf("\n\nELEMENT - '%d' DELETED FROM THE END OF THE LIST.......", n);

	return 0;
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

		//..............(WHICH ONE IS BETTER!)...................

		while (ptr != NULL)					   //vs.// while(ptr->link != NULL)
		{									   // {
			printf("%d\t", ptr->data);		   //   printf("%d\t", ptr->data);
			ptr = ptr->front;				   //   ptr = ptr->link;
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
			delete_end();
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
