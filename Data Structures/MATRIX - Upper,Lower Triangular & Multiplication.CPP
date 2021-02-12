#include <iostream.h>
#include <conio.h>
void main()
{
	int a[3][3], lower[3][3], upper[3][3], res[3][3];
	int i, j, k, sum = 0;

	clrscr();

	/*     cout<<"\nENTER THE SIZE OF FIRST MATRIX..."<<endl;
      cout<<"ROW  :  ";
      cin>>r1;
      cout<<"COLUMN  :  ";
      cin>>c1;

      cout<<"\nENTER THE SIZE OF SECOND MATRIX..."<<endl;
      cout<<"ROW  :  ";
      cin>>r2;
      cout<<"COLUMN  :  ";
      cin>>c2;     */

	/*   if(c1 != r2)
       cout<<"INVALID SIZE TO PERFORM MULTIPLICATION!";      */

	//  else
	//	{
	//  clrscr();

	cout << "\nENTER THE ELEMENTS IN MATRIX....." << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cin >> a[i][j];
	}

	/*	  cout<<"\nENTER THE ELEMENTS OF SECOND MATRIX....."<<endl;
	   for(i=0; i<r2; i++)
	    {
	     for(j=0; j<c2; j++)
	      cin>>arr[i][j];
	    } */

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if ((i + j) <= 2)
				upper[i][j] = a[i][j];
			else
				upper[i][j] = 0;

			if ((i + j) >= 2)
				lower[i][j] = a[i][j];
			else
				lower[i][j] = 0;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
				sum = sum + (upper[i][k] * lower[k][j]);
			res[i][j] = sum;
			sum = 0;
		}
	}

	clrscr();

	cout << "\nENTERED MATRIX (SIZE  :  3 X 3) IS......." << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}

	cout << "\nUPPER TRIANGULAR MATRIX (SIZE  :  3 X 3) IS......." << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cout << upper[i][j] << " ";
		cout << "\n";
	}

	cout << "\nLOWER TRIANGULAR MATRIX (SIZE  :  3 X 3) IS......." << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cout << lower[i][j] << " ";
		cout << "\n";
	}

	cout << "\nAFTER MULTIPLICATION, MATRIX IS......." << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cout << res[i][j] << " ";
		cout << "\n";
	}

	getch();
}