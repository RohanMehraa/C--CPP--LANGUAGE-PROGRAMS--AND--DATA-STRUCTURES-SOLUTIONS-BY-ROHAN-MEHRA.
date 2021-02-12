#include<fstream.h>
#include<conio.h>
#include<stdlib.h>

  void main()
    {
       static int admno;
       char tmp[25];
       clrscr();

       ofstream ofile ("LAST_Adm.TXT");

       admno=1001;

       itoa(admno, tmp, 10);

       ofile<<tmp;

       ofile.close();

       cout<<"\nTASK COMPLETED......"<<endl;

       getch();
    }