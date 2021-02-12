#include <iostream.h>
#include <conio.h>
void main()
{
	int ar[10][10], arr[10][10], mat[10][10];
	int r1, c1, r2, c2, i, j, k, sum = 0;

	clrscr();

	cout << "\nENTER THE SIZE OF FIRST MATRIX..." << endl;
	cout << "ROW  :  ";
	cin >> r1;
	cout << "COLUMN  :  ";
	cin >> c1;

	cout << "\nENTER THE SIZE OF SECOND MATRIX..." << endl;
	cout << "ROW  :  ";
	cin >> r2;
	cout << "COLUMN  :  ";
	cin >> c2;

	if (c1 != r2)
		cout << "\n\nINVALID SIZE TO PERFORM MULTIPLICATION!";

	else
	{
		clrscr();

		cout << "\nENTER THE ELEMENTS OF FIRST MATRIX....." << endl;
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
				cin >> ar[i][j];
		}

		cout << "\nENTER THE ELEMENTS OF SECOND MATRIX....." << endl;
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
				cin >> arr[i][j];
		}

		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				for (k = 0; k < r2; k++)
					sum = sum + (ar[i][k] * arr[k][j]);
				mat[i][j] = sum;
				sum = 0;
			}
		}

		clrscr();

		cout << "\nFIRST MATRIX (SIZE  :  " << r1 << " X " << c1 << ") IS......." << endl;
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
				cout << ar[i][j] << " ";
			cout << "\n";
		}

		cout << "\nSECOND MATRIX (SIZE  :  " << r2 << " X " << c2 << ") IS......." << endl;
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
				cout << arr[i][j] << " ";
			cout << "\n";
		}

		cout << "\nAFTER MULTIPLICATION, MATRIX IS......." << endl;
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
				cout << mat[i][j] << " ";
			cout << "\n";
		}
	}

	getch();
}