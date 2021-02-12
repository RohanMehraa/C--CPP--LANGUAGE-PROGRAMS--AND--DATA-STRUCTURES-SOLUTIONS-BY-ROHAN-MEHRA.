#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int testCase, houses, tickets[10000], tmp[10], win[10][20];
	char winner[10][1000], str[2000], str1[1000];

	clrscr();

	cout << "\n\nENTER THE NO. OF TEST CASES YOU WANT TO RUN   :  ";
	cin >> testCase;

	for (int t = 0; t < testCase; t++)
	{
		tmp[t] = 0;
		clrscr();

		cout << "\n\nENTER NO. OF HOUSES IN TEST-CASE - " << t + 1 << "   :   ";
		cin >> houses;

		cout << "\n\nENTER TICKET NO.S FOR " << houses << " - HOUSES" << endl;

		for (int j = 0; j < houses; j++)
			cin >> tickets[j];

		int max = 0;

		for (j = houses; j >= 0; j--)
		{
			int sum = 0;

			if (tickets[j] != 0)
			{
				for (int i = 0; i < houses; i++)
				{
					if (j != houses)
					{
						if ((i != j + 1) && (i != j - 1))
						{
							sum = tickets[j] + tickets[i];

							if (tickets[j] > sum)
							{
								sum = tickets[j];
								win[t][tmp[t]++] = tickets[j];
								itoa(sum, str, 10);
								strcpy(winner[t], str);
							}

							if (tickets[i] > sum)
							{
								sum = tickets[i];
								win[t][tmp[t]++] = tickets[i];
								itoa(sum, str, 10);
								strcpy(winner[t], str);
							}

							if (sum > max)
							{
								max = sum;
								win[t][tmp[t]++] = tickets[j];
								win[t][tmp[t]++] = tickets[i];

								itoa(tickets[j], str, 10);
								itoa(tickets[i], str1, 10);
								strcat(str, str1);
								strcpy(winner[t], str);
							}
						}
					}

					else
					{
						if (i != 0 && i != (j - 1))
						{
							sum = tickets[j] + tickets[i];

							if (tickets[j] > sum)
							{
								sum = tickets[j];
								win[t][tmp[t]++] = tickets[j];

								itoa(sum, str, 10);
								strcpy(winner[t], str);
							}

							if (tickets[i] > sum)
							{
								sum = tickets[i];
								win[t][tmp[t]++] = tickets[i];

								itoa(sum, str, 10);
								strcpy(winner[t], str);
							}

							if (sum > max)
							{
								max = sum;
								win[t][tmp[t]++] = tickets[j];
								win[t][tmp[t]++] = tickets[i];

								itoa(tickets[j], str, 10);
								itoa(tickets[i], str1, 10);
								strcat(str, str1);
								strcpy(winner[t], str);
							}
						}
					}
				}
			}
		}

		// max[i] = max;
	}

	clrscr();

	cout << "\n\nWINNERS ARE..........." << endl
		 << endl;

	for (int i = 0; i < testCase; i++)
	{
		for (int j = 0; j < tmp[i]; j++)
			cout << win[i][j] << " ";
		cout << "\n";
	}

	getch();
}