#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


 class student
   {
	   char eno[10], nm[30], prg[5],  cursem[8], yr[7], rgnc[50], stdc[50], curpbt[3], curtbt[3], prbat[3], thbat[3],  studadd[50], curfee[8], curfeedat[10], fee[8], feedat[10];

	   char tdes[10][10], tdesdat[10][10], pdes[10][10], pdesdat[10][10], tcdat[10][10], tctim[10][10], pcdat[10][10], pctim[10][10], passdat[10][10], tassdat[10][10];

	   int crsmno, sem;

	   int admno;

     public :
	   student()
	   {clrscr();   cout<<"\n\n\n"<<admno<<endl<<endl; getch();}

  /*	   ~student()
	     {
	       ofstream tmpfile("LAST_ADM.TXT");
	      // tmpfile.open("LAST_ADM.TXT", ios::out);

	       tmpfile.seekp(ios::beg);
	       tmpfile<<admno;
	       //tmpfile.write( (char *) &admno, sizeof(admno));

	       tmpfile.close();
	     }   */


	   void addstud(ofstream  &);
	   int showstud();

   };

 class course
   {
		char prg[5], mindur[7], maxdur[7], tsub[10][10], psub[10][10];
		int semtot, thtot[14], prtot[14];

	public :
		void addcourse();
		void showcourse();

   };


  void student :: addstud(ofstream  &ofile)
    {
      clrscr();
		char fname[40];
		char wrd[10], ch;
		int tmp, i=0;

		ifstream tmpfile("LAST_ADM.TXT");
		while(tmpfile)  {
			tmpfile.get(ch);
			wrd[i++]=ch;} wrd[i]='\0';
		tmpfile.close();

			printf("\n\n%s",wrd);
		getch();
			clrscr();

		tmp=atoi(wrd);

		admno = tmp;

		cout<<"\n\nENTER PROGRAMME CODE TO WHICH YOU SEEK ADMISSION  :  ";
		     gets(prg);

	      char tmpad[20];
	      strcpy(eno, prg);

	      itoa(admno, tmpad, 10);
	      strcat(eno, tmpad);
	      admno++;

	      ofstream lastadm("LAST_ADM.TXT");
	       lastadm.seekp(ios::beg);
	       lastadm<<admno;
	      lastadm.close();

	      cout<<"\n\n"<<eno<<endl;

	     strcpy(fname, eno);
		     strcat(fname,".TXT");

		     printf("\n\n%s",fname); getch();

		     ofile.open(fname, ios::out);

		     cout<<"\n\nENTER STUDENT'S NAME  :  ";
		     gets(nm);

		     cout<<"\n\n\nENTER STUDENT'S ADDRESS  :  \n\n";
		     gets(studadd);

	    /*	     cout<<"\n\n\nENTER PROGRAMME CODE  :  ";
		     gets(prg);

		     cout<<"\n\nMINIMUM DURATION  :  ";
		     gets(st.mindur);

		     cout<<"\n\nMAXIMUM DURATION  :  ";
		     gets(st.maxdur);  */

		     cout<<"\n\nCURRENT SEMESTER (IN CAPITAL WORDS)  :  ";
		     gets(cursem);

		     cout<<"\n\nCURRENT SEMESTER NO. (IN NUMERICAL FIGURES)  :  ";
		     cin>>crsmno;

		     cout<<"\n\nENTER YEAR OF STUDY  :  ";
		     fflush(stdin);
		     gets(yr);

		     cout<<"\n\nENTER REGIONAL CENTRE NAME  :  ";
		     gets(rgnc);

		     cout<<"\n\nENTER STUDY CENTRE NAME  :  ";
		     gets(stdc);

		     cout<<"\n\nENTER CURRENT SEMESTER'S PRACTICAL BATCH  :  ";
		     gets(curpbt);

		     cout<<"\n\nENTER CURRENT SEMESTER'S THEORY BATCH  :  ";
		     gets(curtbt);

		     cout<<"\n\nENTER FEE STATUS  :  ";
		     gets(curfee);

		     cout<<"\n\nENTER FEE PAYMENT DATE  :  ";
		     gets(curfeedat);

	 //   tmpfile.close();
	   // tmpfile.clear();

    }


  void course :: addcourse()
    {
      clrscr();

      char fname[15];

		   cout<<"\n\nENTER SEMESTER DETAILS....";

		      cout<<"\n\nENTER TOTAL NO. OF SEMESTERS IN "<<prg<<" PROGRAMME (MAXIMUM 8-SEMESTERS)";
		      cin>>semtot;

   /*remark*/	    for(int sm=1 ;  sm <= semtot  ; sm++)
		      {
			   clrscr();

		       /*if( sm <= st.crsmno)
			 {
			   cout<<"\n\nFEE STATUS FOR  SEMESTER-%d  :  ",sm);
			   gets(st[i][sm].fee);

			   cout<<"\n\nPAYMENT DATE  :  ";
			   gets(st[i][sm].feedat);   }*/

			   cout<<"\n\nENTER NO. OF THEORY SUBJECTS IN  SEMESTER-"<<sm<<"  :  ";
			   cin>>thtot[sm];

			 /*  cout<<"\n\nENTER THEORY BATCH CODE FOR  SEMESTER-%d  :  ",sm);
			   fflush(stdin);
			   gets(st.thbat); */

/*index problem*/			   for(int j=0; j<thtot[0]; j++)
			     {
				clrscr();

			       cout<<"\n\nENTER SUBJECT CODE FOR  SUBJECT-"<<j+1<<"  (THEORY)  :  ";
			       gets(tsub[j]);

		       /*	       cout<<"\n\nENTER STUDY MATERIAL DESPATCH STATUS FOR  SUBJECT ("<<st.tsub[j]<<")  :  ";
			       gets(st.tdes[j]);

			       cout<<"\n\nENTER DESPATCH DATE  :  ";
			       gets(st.tdesdat[j]);

			       cout<<"\n\n\nENTER COUNSELLING SCHEDULE FOR THEORY SUBJECT  :  "<<st.tsub[j];

			       cout<<"\n\nCOUNSELLING DATE  :  ";
			       gets(st.tcdat[j]);

			       cout<<"\n\nCOUNSELLING TIME  :  ";
			       gets(st.tctim[j]);

			       cout<<"\n\nENTER ASSIGNMENT SUBMISSION SCHEDULE FOR THEORY SUBJECT ("<<st.tsub[j]<<")  :  ";
			       gets(st.tassdat[j]);        */

			       cout<<"\n\n\nDETAILS OF SUBJECT ("<<tsub[j]<<") SAVED SUCCESSFULLY.....";
			   }

			 clrscr();

			 cout<<"\n\nENTER NO. OF PRACTICAL SUBJECTS IN  SEMESTER-"<<sm<<"  :  ";
			 cin>>prtot[sm];

			 /*  cout<<"\n\nENTER PRACTICAL BATCH CODE FOR  SEMESTER-%d  :  ",sm);
			   fflush(stdin);
			   gets(st.prbat); */

/*index problem*/			   for(j=0 ;  j < prtot[0]  ; j++)
			     {
				clrscr();

			       cout<<"\n\nENTER SUBJECT CODE FOR SUBJECT-"<<j+1<<"  (PRACTICAL)  :  ";
			       gets(psub[j]);

			    /*   cout<<"\n\nENTER STUDY MATERIAL DESPATCH STATUS FOR  SUBJECT ("<<st.psub[j]<<")  :  ";
			       gets(st.pdes[j]);

			       cout<<"\n\nENTER DESPATCH DATE  :  ";
			       gets(st.pdesdat[j]);

			       cout<<"\n\n\nENTER COUNSELLING SCHEDULE FOR PRACTICAL SUBJECT  :  "<<st.psub[j];

			       cout<<"\n\nCOUNSELLING DATE  :  ";
			       gets(st.pcdat[j]);

			       cout<<"\n\nCOUNSELLING TIME  :  ";
			       gets(st.pctim[j]);

			       cout<<"\n\nENTER ASSIGNMENT SUBMISSION SCHEDULE FOR SUBJECT ("<<st.psub[j]<<")  :  ";
			       gets(st.passdat[j]);        */

			       cout<<"\n\n\nDETAILS OF SUBJECT ("<<psub[j]<<") SAVED SUCCESSFULLY.....";
			   }

		      clrscr();

		      cout<<"\n\nDETAILS OF  SEMESTER-"<<sm<<" SAVED SUCCESSFULLY....";

		      getch();

	   /*	    }

		  else
		     break;         */

		}



      }


  int student :: showstud()
    {
      char fname[15], enrol[10];

      cout<<"\n\nENTER YOUR 9-DIGIT ENROLLMENR NO.  :  ";
      fflush(stdin);
      gets(enrol);

      strcpy(fname, enrol);
      strcat(fname,".TXT");

      printf("\n\n%s\n",fname);     getch();

      ifstream showfile;
      showfile.open(fname, ios::in);
 //     showfile.read( (char *) &st , sizeof(st) );


      if(!showfile)
	{
	  cout<<"\n\nENROLLMENT NO. NOT FOUND.....";
	  getch();
	  return 0;
	}

		  /*   rewind(fp);

		     flag=0;

	 //	   for(rec=0; rec<=100; rec++)
	//	     {
			rec=0;

		       while( fread(&st[rec++][0], recsizest, 1, fp) == 1 )
			{
			   if( strcmp( st[rec][0].eno , enrol) == 0 )
			     {
			       flag=1;          */

	clrscr();

	cout<<"\n\nENROLLMENT NO.     :  "<<eno<<endl;
	cout<<"\nSTUDENT'S NAME     :  "<<nm<<endl;
	cout<<"\nSTUDENT'S ADDRESS  :  "<<studadd<<endl;
	cout<<"\nPROGRAMME CODE     :  "<<prg<<endl;
    //	cout<<"\n\nMINIMUM DURARION   :  "<<mindur<<" YEARS"<<endl;;
    //  cout<<"\n\nMAXIMUM DURARION   :  "<<maxdur<<" YEARS"<<endl;;
	cout<<"\nSEMESTER           :  "<<cursem<<endl;
	cout<<"\nYEAR OF STUDY      :  "<<yr<<endl;
	cout<<"\nREGIONAL CENTRE    :  "<<rgnc<<endl;
	cout<<"\nSTUDY CENTRE       :  "<<stdc<<endl;
	cout<<"\nPRACTICAL BATCH    :  "<<curpbt<<endl;
	cout<<"\nTHEORY BATCH       :  "<<curtbt<<endl;

    /*  }

    }

		     if(flag==0)
		      cout<<"\n\nENROLLMENT NO. NOT FOUND..... ";      */

      getch();
      showfile.close();
      showfile.clear();
      return 0;

    }




  void main()
     {
       //FILE  *fp;

       char  another='y',  choice, fname[40], prg[7];
       int i, j, rec, sm, flag, space, semno;

     //  stud st;

	char enrol[10], sems[8], prog[5], tbt[5], pbt[5];
	long int recsizest, recsizesm;

     /*	fp=fopen("IGN7.TXT" , "rb+");

	if(fp==NULL)
	   {
	     fp=fopen("IGN7.TXT" , "wb+");

	     if(fp==NULL)
	       {
		 clrscr();
		 puts("\n\nCANNOT OPEN FILE.....");
		  getch();
		  exit(1);
	       }
	   }



       recsizest=sizeof(st);    */


      while(1)
       {
	clrscr();

	cout<<"\n\nA.) ADD STUDENT DETAILS....";

	cout<<"\n\nB.) ENTER SEMESTER DETAILS....";

	cout<<"\n\n1.) STUDENT INFORMATION.....";

	cout<<"\n\n2.) (COURSE INFO) MATERIAL DESPATCH STATUS....";

	cout<<"\n\n3.) FEE STATUS....";

	cout<<"\n\n4.) THEORY COUNSELLING SCHEDULE.....";

	cout<<"\n\n5.) PRACTICAL COUNSELLING SCHEDULE....";

	cout<<"\n\n6.) ASSIGNMENT SUBMISSION SCHEDULE....";

	cout<<"\n\n9.) QUIT...";

	cout<<"\n\n\nENTER YOUR CHOICE....";

	fflush(stdin);
	choice=getche();


	switch(choice)
	  {
	      case 'A' :
		  clrscr();

		  another = 'y';

		 while( another=='Y' || another=='y' )
		  {
		   student st;

		  ofstream ofile;

		   st.addstud(ofile);

		  ofile.write( (char *) &st, sizeof(st) );
		  ofile.close();
		  ofile.clear();

		 clrscr();

		 cout<<"\n\nSTUDENT'S DETAILS SAVED SUCCESSFULLY.....";
		 cout<<"\n\n\nADD RECORD FOR ANOTHER STUDENT (Y/N)......?    :    ";

		 fflush(stdin);
		 another=getche();
	      }



	      break;


	      case 'B' :

		  while( another=='Y' || another=='y' )
		  {
		   cout<<"\n\nENTER THE PROGRAMME CODE    :   ";
		   gets(prg);

		   course cr;

		   strcpy(fname, prg);
		   strcat(fname,".txt");

		     ofstream ofile;

		     ofile.open(fname, ios::app);

		   cr.addcourse();

		   ofile.write( (char *) &cr, sizeof(cr) );

		   ofile.close();

		   clrscr();

		   cout<<"\n\n\nADD RECORD FOR ANOTHER STUDENT (Y/N)......?    :    ";

		   fflush(stdin);
		   another=getche();
		 }

		 break;


	      case '1' :

		clrscr();

	      /*	cout<<"\n\nENTER YOUR PROGRAMME CODE   :   ";
		gets(prg);         */

	     //	student st;
		 another = 'y';

		 while(another=='Y' || another=='y')
		   {
		     clrscr();

		     student st;
		     st.showstud();

		     cout<<"\n\n\n\nSHOW ANOTHER RECORD (Y/N).....?  :  ";
		     fflush(stdin);
		     another = getche();

		   }

		   break;

		case '2' :
		course cr;

		 while(another=='Y' || another=='y')
		   {
		     clrscr();

		  //   cr.showcourse();

		     cout<<"\n\n\n\nSHOW ANOTHER RECORD (Y/N).....?  :  ";
		     fflush(stdin);
		     another = getche();

		   }

		   break;




  /*	      case '2' :

		       another='Y';

		 while(another=='Y' || another=='y')
		   {
		     clrscr();

		     cout<<"\n\nENTER YOUR 9-DIGIT ENROLLMENR NO.  :  ";
		     gets(enrol);

		     cout<<"\n\nENTER ' SEMENSTER NUMBER (1/2/3/4/5/6/7/8...) '  :  ";
		     scanf("%d",&semno);

		     rewind(fp);

		     flag=0;
		     rec=0;

		       while( fread(&st, recsizest, 1, fp) ==1 )             //add rec array
			{                                                       //for(sm=1; sm <= 15; sm++)
			   if( strcmp(st[rec++][0].eno , enrol) == 0 )      // && st[rec][sm].sem == semno)
			    {
			      flag=1;

			     if(semno <= st[rec][0].crsmno)
			      {
			       clrscr();

			       gotoxy(4,3);
			       cout<<"SUBJECT CODE";

			       gotoxy(18,3);
			       cout<<"DESPATCH STAUS";

			       gotoxy(53,3);
			       cout<<"DESPATCH DATE";

			       space=5;


				 for(j=0 ;  j < st[rec][semno].thtot[semno-1]  ; j++)
				   {

				     gotoxy(4,space);
				     cout<<"%s",st[rec][semno].tsub[j]);

				     gotoxy(18,space);
				     cout<<"%s",st[rec][semno].tdes[j]);

				     gotoxy(53,space);
				     cout<<"%s",st[rec][semno].tdesdat[j]);

				     space+=2;
				   }

				 for(j=0 ;  j < st[rec][semno].prtot[semno-1]  ; j++)
				   {

				     gotoxy(4,space);
				     cout<<"%s",st[rec][semno].psub[j]);

				     gotoxy(18,space);
				     cout<<"%s",st[rec][semno].pdes[j]);

				     gotoxy(53,space);
				     cout<<"%s",st[rec][semno].pdesdat[j]);

				     space+=2;
				  }

			      }

			    else if(semno > st[rec][0].crsmno)
				  cout<<"\n\nWRONG SEMESTER NO, DETAILS NOT FOUND.....";

			break;

		     }


		   }


		   if(flag==0)
			cout<<"\n\nENROLLMENT NO. NOT FOUND..... ";


		     getch();

		     cout<<"\n\n\n\nSHOW ANOTHER RECORD (Y/N).....?  :  ";
		     fflush(stdin);
		     another = getche();

		   }

		   break;  */


/*	      case '3' :

		      another='Y';

		 while(another=='Y' || another=='y')
		   {
		     clrscr();

		     cout<<"\n\nENTER YOUR 9-DIGIT ENROLLMENR NO.  :  ";
		     gets(enrol);

		     cout<<"\n\nENTER 'SEMENSTER NUMBER'  :  ";
		     scanf("%d",&semno);

		     rewind(fp);

		     flag=0;

		     while( fread(&st, recsizest, 1, fp) ==1  &&  fread(&sm, recsizesm, 1, fp)==1 )
			{
			   for(i=0; i<14; i++)
			   {
			    if( strcmp(st.eno , enrol) == 0  && sm[i].sem == semno)
			     {
			       flag=1;

			       clrscr();

			       cout<<"\n\nENROLLMENT NO.    :    %s",st.eno);
			       cout<<"\n\nSTUDENT'S NAME    :    %s",st.nm);
			       cout<<"\n\nPROGRAMME CODE    :    %s",st.prg);
			       cout<<"\n\nSEMESTER          :    %d",sm[i].sem);
			       cout<<"\n\nFEE STATUS        :    %s",sm[i].fee);
			       cout<<"\n\nPAYMENT DATE      :    %s",sm[i].feedat);

			       break;
			     }
			   }

		       if(flag==1)
			break;

		     }

		     if(flag==0)
			cout<<"\n\nENROLLMENT NO. NOT FOUND..... ";


		     getch();

		     cout<<"\n\n\n\nSHOW ANOTHER RECORD (Y/N).....?  :  ";
		     fflush(stdin);
		     another = getche();

		   }

		   break;



	      case '4' :

		    another='Y';

		 while(another=='Y' || another=='y')
		   {
		     clrscr();

		     cout<<"\n\nENTER ' SEMENSTER NUMBER (1/2/3/4/5/6/7/8...) '  :  ";
		     scanf("%d",&semno);

		     cout<<"\n\nENTER THEORY BATCH CODE (CASE SENSITIVE)  :  ";
		     fflush(stdin);
		     gets(tbt);

		     rewind(fp);

		     flag=0;

		       while( fread(&st, recsizest, 1, fp) ==1  &&  fread(&sm, recsizesm, 1, fp)==1 )
			{
			   for(i=0; i<14; i++)
			   {
			    if( strcmp(sm[i].thbat , tbt) == 0  && sm[i].sem == semno)
			     {
			       flag=1;

			       clrscr();

			       gotoxy(5,3);
			       cout<<"PROGRAMME  :  %s",st.prg);

			       gotoxy(30,3);
			       cout<<"SEMESTER  :  %d",sm[i].sem);

			       gotoxy(50,3);
			       cout<<"THEORY BATCH  :  %s",sm[i].thbat);

			       gotoxy(4,7);
			       cout<<"SUBJECT CODE";

			       gotoxy(28,7);
			       cout<<"COUNCELLING DATE";

			       gotoxy(53,7);
			       cout<<"COUNCELLING TIME";

			       space=9;


				 for(j=0; j<sm[i].thtot[semno-1]; j++)
				   {

				     gotoxy(4,space);
				     cout<<"%s",sm[i].tsub[j]);

				     gotoxy(28,space);
				     cout<<"%s",sm[i].tcdat[j]);

				     gotoxy(53,space);
				     cout<<"%s",sm[i].tctim[j]);

				     space+=2;
				   }

				 break;

			      }

			  }

		     if(flag==1)
		       break;

		   }


		   if(flag==0)
		      {
			cout<<"\n\nTHEORY BATCH NOT FOUND....";
			cout<<"\n\nPLEASE CHECK YOUR THEORY BATCH DETAILS IN STUDENT INFORMATION SECTION..... ";
		      }

		     getch();

		     cout<<"\n\n\n\nSHOW ANOTHER RECORD (Y/N).....?  :  ";
		     fflush(stdin);
		     another = getche();

		   }

		   break;



	       case '5' :

		    another='Y';

		 while(another=='Y' || another=='y')
		   {
		     clrscr();

		     cout<<"\n\nENTER ' SEMENSTER NUMBER (1/2/3/4/5/6/7/8...) '  :  ";
		     scanf("%d",&semno);

		     cout<<"\n\nENTER PRACTICAL BATCH CODE (CASE SENSITIVE)  :  ";
		     fflush(stdin);
		     gets(pbt);

		     rewind(fp);

		     flag=0;

		       while( fread(&st, recsizest, 1, fp) ==1  &&  fread(&sm, recsizesm, 1, fp)==1 )
			{
			   for(i=0; i<14; i++)
			   {
			    if( strcmp(sm[i].prbat , pbt) == 0  && sm[i].sem == semno)
			     {
			       flag=1;

			       clrscr();

			       gotoxy(5,3);
			       cout<<"PROGRAMME  :  %s",st.prg);

			       gotoxy(30,3);
			       cout<<"SEMESTER  :  %d",sm[i].sem);

			       gotoxy(50,3);
			       cout<<"PRACTICAL BATCH  :  %s",sm[i].prbat);

			       gotoxy(4,7);
			       cout<<"SUBJECT CODE";

			       gotoxy(28,7);
			       cout<<"COUNCELLING DATE";

			       gotoxy(53,7);
			       cout<<"COUNCELLING TIME";

			       space=9;


				 for(j=0; j<sm[i].prtot[semno-1]; j++)
				   {

				     gotoxy(4,space);
				     cout<<"%s",sm[i].psub[j]);

				     gotoxy(28,space);
				     cout<<"%s",sm[i].pcdat[j]);

				     gotoxy(53,space);
				     cout<<"%s",sm[i].pctim[j]);

				     space+=2;
				   }

				 break;

			      }

			  }

		     if(flag==1)
		       break;

		   }


		   if(flag==0)
		      {
			cout<<"\n\nPRACTICAL BATCH NOT FOUND....";
			cout<<"\n\nPLEASE CHECK YOUR THEORY BATCH DETAILS IN STUDENT INFORMATION SECTION..... ";
		      }

		     getch();

		     cout<<"\n\n\n\nSHOW ANOTHER RECORD (Y/N).....?  :  ";
		     fflush(stdin);
		     another = getche();

		   }

		   break;       */







	      case '9' :

		  //   fp.close();
		     exit(0);


	}

      }

    }







    /*	   case 'B' :

		fseek(fp, 0, SEEK_END);

		another='Y';

	       while(another=='Y' || another=='y')
		{
		   clrscr();

		  cout<<"\nENTER PROGRAMME CODE  :  ";
		  gets(prog);

		  cout<<"\n\nENTER TOTAL NO. OF SEMESTERS IN  %s  PROGRAMME  :  ",prog);
		     scanf("%d",&totsem);

			for(j=1 ; j <= totsem ; j++)
			  {
			    clrscr();

			    cout<<"\n\nSEMESTER  :  ";
			    fflush(stdin);
			    gets(sm[j].sem);

			    cout<<"\n\nENTER ENROLLMENT NO. FOR %s SEMESTER :  ",sm[j].sem);
			    gets(sm[j].enrl);


			    cout<<"\n\nFEE STATUS FOR %s SEMESTER  :  ",sm[j].sem);
			    gets(sm[j].feestat);

			    cout<<"\n\nFEE PAYMENT DATE  :  ";
			    gets(sm[j].feedate);

			    cout<<"\n\nENTER NO. OF THEORY SUBJECTS IN  %s  SEMESTER  :  ",sm[j].sem);
			    scanf("%d",&sm[j].tsubno[j]);

			    cout<<"\n\nENTER THEORY BATCH FOR ENROLLMENT NO.(%s) IN  %s SEMESTER  :  ",sm[j].enrl,sm[j].sem);
			     fflush(stdin);
			     gets(sm[j].tsmbt);

			    for(k=1; k<sm[j].tsubno[j] ; k++)
			      {
				cout<<"\n\nENTER SUBJECT CODE FOR %dST SUBJECT  :  ",k);
				gets(sm[j].tsub[k]);

				cout<<"\n\nENTER STUDY MATERIAL DESPATCH STATUS FOR %s  :  ",sm[j].tsub[k]);
				gets(sm[j].des[k]);

				cout<<"\n\nENTER DESPATCH DATE  :  ";
				gets(sm[j].desdat[k]);


				cout<<"\n\n\nENTER COUNSELLING SCHEDULE DETAILS FOR SUBJECT  :  %s  ,sm[j].tsub[k]";

				cout<<"\n\nCOUNSELLING DATE FOR SUBJECT (%S)  :  ",sm[j].tsub[k]);
				gets(sm[j].thdat[k]);

				cout<<"\n\nCOUNSELLING TIME FOR SUBJECT (%s)  :  ",sm[j].tsub[k]);
				gets(sm[j].thtim[k]);

				cout<<"\n\nENTER ASSIGNMENT SUBMISSON DATE FOR SUBJECT (%s)  :  ",sm[j].tsub[k]);
				gets(sm[j].tassdat[k]);

			      }

			    cout<<"\n\nDETAILS OF THEORY SUBJECTS SAVED SUCCESSFULLY.....";

			    getch();
			    clrscr();

			    cout<<"\n\nENTER NO. OF PRACTICAL SUBJECTS IN  %s  SEMESTER  :  ",sm[j].sem);
			    scanf("%d",&sm[j].psubno[j]);

			    cout<<"\n\nENTER PRACTICAL BATCH FOR ENROLLMENT NO.(%s) IN  %s SEMESTER  :  ",sm[j].enrl,sm[j].sem);
			     fflush(stdin);
			     gets(sm[j].psmbt);

			    for(k=1;  k <= sm[j].psubno[j]  ; k++)
			      {
				cout<<"\n\nENTER SUBJECT CODE OF %dST SUBJECT  :  ",k);
				gets(sm[j].psub[k]);

				cout<<"\n\nENTER STUDY MATERIAL DESPATCH STATUS OF %s  :  ",sm[j].psub[k]);
				gets(sm[j].des[k]);

				cout<<"\n\nENTER DESPATCH DATE  :  ";
				gets(sm[j].desdat[k]);


				cout<<"\n\n\nENTER COUNSELLING SCHEDULE DETAILS FOR SUBJECT   ;  %s",sm[j].psub[k]);

				cout<<"\n\nCOUNSELLING DATE  :  ";
				gets(sm[j].prdat[k]);

				cout<<"\n\nCOUNSELLING TIME  :  ";
				gets(sm[j].prtim[k]);

				cout<<"\n\nENTER ASSIGNMENT SUBMISSON DATE SUBJECT (%s)  :  ",sm[j].psub[k]);
				gets(sm[j].passdat[k]);


			      }

			    cout<<"\n\nDETAILS OF PRACTICAL SUBJECTS SAVED SUCCESSFULLY.....";

			    getch();
			    clrscr();

			    cout<<"\n\nDETAILS OF %s SEMESTER SAVED SUCCESSFULLY......",sm[j].sem);

			  }

		     fwrite(&sm, recsizesm, 1, fp);

		     cout<<"\n\nDETAILS OF  %s  PROGRAMME SAVED SUCCESSFULLY.....",prog);

		    cout<<"\n\n\nADD ANOTHER RECORD (Y/N)......?    :    ";

		    fflush(stdin);
		    another=getche();
		  }

	       break;            */



    /* 	     case '3' :

		      another='Y';

		 while(another=='Y' || another=='y')
		   {
		     clrscr();

		     cout<<"\n\nENTER PROGRAMME CODE  :  ";
		     gets(prog);

		     cout<<"\n\nENTER YOUR 9-DIGIT ENROLLMENR NO.  :  ";
		     gets(enrol);

		     cout<<"\n\nENTER 'SEMENSTER NUMBER'  :  ";
		     scanf("%d",&semno);

		     rewind(fp);

		     flag=0;

		     while( fread(&sm, recsizesm, 1, fp) ==1)
			{
			   if( strcmp( sm[semno].enrl , enrol ) == 0 )
			     {
			       flag=1;

			       clrscr();

			       cout<<"\n\nENROLLMENT NO.    :  ",sm[semno].enrl);
			       cout<<"\n\nPROGRAMME CODE    :  ",prog);
			       cout<<"\n\nSEMESTER          :  ",sm[semno].sem);
			       cout<<"\n\nFEE STATUS        :  ",sm[semno].feestat);
			       cout<<"\n\nPAYMENT DATE      :  ",sm[semno].feedate);

			     }
			}

		     if(flag==0)
		       cout<<"\n\nENROLLMENT NO. NOT FOUND......";

		      getch();

		     cout<<"\n\n\n\nSHOW ANOTHER RECORD (Y/N).....?  :  ";
		     fflush(stdin);
		     another = getche();

		   }

		   break;


	       case '4' :

		      another='Y';

		 while(another=='Y' || another=='y')
		   {
		     clrscr();

		     cout<<"\n\nENTER PROGRAM CODE  :  ";
		     gets(prog);

		     cout<<"\n\nENTER 'SEMENSTER NUMBER'  :  ";
		     scanf("%d",&semno);

		     cout<<"\n\nENTER YOUR THEORY BATCH CODE  :  ";
		      fflush(stdin);
		     gets(bt);

		     rewind(fp);

		     flag=0;

		     while( fread(&sm, recsizesm, 1, fp) ==1)
			{
			   if( strcmp( sm[semno].tsmbt , bt ) == 0 )
			     {
			       flag=1;

			       clrscr();

			       gotoxy(4,3);
			       cout<<"COUNSELLING SCHEDULE FOR THEORY BATCH %s  (%s %s SEMESTER)",sm[semno].tsmbt, prog, sm[semno].sem);

			       gotoxy(4,6);
			       cout<<"SUBJECT CODE";

			       gotoxy(18,6);
			       cout<<"DATE";

			       gotoxy(53,6);
			       cout<<"TIME";

				space=8;

			 for(i=0; i<sm[semno].tsubno[semno] ; i++)
				  {
				    gotoxy(4,space);
				    cout<<"%d",sm[semno].tsub[semno]);

				    gotoxy(18,space);
				    cout<<"%s",sm[semno].thdat[semno]);

				    gotoxy(53,space);
				    cout<<"%f",sm[semno].thtim[semno]);

				    space+=2;
				  }
			       }
			   }

		      if(flag==0)
		       {
			 cout<<"\n\nENROLLMENT NO. NOT FOUND ENTERED BATCH CODE..... ";
			 cout<<"\n\nPLEASE CHECK YOUR BATCH CODE AGAIN IN  'STUDENT INFORNATION SECTION'";
		       }

		     getch();
		     clrscr();

		     cout<<"\n\n\n\nSHOW ANOTHER RECORD (Y/N).....?  :  ";
		     fflush(stdin);
		     another = getche();

		   }

		   break;


	      case '5' :

		      another='Y';

		 while(another=='Y' || another=='y')
		   {
		     clrscr();

		     cout<<"\n\nENTER PROGRAM CODE  :  ";
		     gets(prog);

		     cout<<"\n\nENTER 'SEMENSTER NUMBER'  :  ";
		     scanf("%d",&semno);

		     cout<<"\n\nENTER YOUR PRACTICAL BATCH CODE  :  ";
		      fflush(stdin);
		     gets(bt);

		     rewind(fp);

		     flag=0;

		     while( fread(&sm, recsizesm, 1, fp) ==1)
			{
			   if( strcmp( sm[semno].psmbt , bt ) == 0 )
			     {
			       flag=1;

			       clrscr();

			       gotoxy(4,3);
			       cout<<"COUNSELLING SCHEDULE FOR PRACTICAL BATCH %s  (%s %s SEMESTER)",sm[semno].psmbt, prog, sm[semno].sem);

			       gotoxy(4,6);
			       cout<<"SUBJECT CODE";

			       gotoxy(18,6);
			       cout<<"DATE";

			       gotoxy(53,6);
			       cout<<"TIME";

				space=8;

			 for(i=0; i<sm[semno].psubno[semno] ; i++)
				  {
				    gotoxy(4,space);
				    cout<<"%d",sm[semno].psub[semno]);

				    gotoxy(18,space);
				    cout<<"%s",sm[semno].prdat[semno]);

				    gotoxy(53,space);
				    cout<<"%f",sm[semno].prtim[semno]);

				    space+=2;
				  }
			       }
			   }

		      if(flag==0)
		       {
			 cout<<"\n\nENROLLMENT NO. NOT FOUND IN ENTERED BATCH CODE..... ";
			 cout<<"\n\nPLEASE CHECK YOUR BATCH CODE AGAIN IN  'STUDENT INFORNATION SECTION'";
		       }

		     getch();
		     clrscr();

		     cout<<"\n\n\n\nSHOW ANOTHER RECORD (Y/N).....?  :  ";
		     fflush(stdin);
		     another = getche();

		   }

		   break;


	      case '6' :

		      another='Y';

		 while(another=='Y' || another=='y')
		   {
		     clrscr();

		     cout<<"\n\nENTER PROGRAM CODE  :  ";
		     gets(prog);

		     cout<<"\n\nENTER 'SEMENSTER NUMBER'  :  ";
		     scanf("%d",&semno);

		     cout<<"\n\nENTER ENROLLMENT NO.  :  ";
		      fflush(stdin);
		     gets(enrol);

		     rewind(fp);

		     flag=0;

		     while( fread(&sm, recsizesm, 1, fp) ==1)
			{
			   if( strcmp( sm[semno].enrl , enrol ) == 0 )
			     {
			       flag=1;

			       clrscr();

			       gotoxy(4,3);
			       cout<<"ASSIGNMENT SUBMISSION SCHEDULE FOR (%s %s SEMESTER)", prog, sm[semno].sem);

			       gotoxy(4,6);
			       cout<<"SUBJECT CODE";

			       gotoxy(18,6);
			       cout<<"DATE";

			       space=8;

			 for(i=0; i<sm[semno].tsubno[semno] ; i++)
				  {
				    gotoxy(4,space);
				    cout<<"%d",sm[semno].tsub[semno]);

				    gotoxy(18,space);
				    cout<<"%s",sm[semno].tassdat[semno]);

				    space+=2;
				  }

				space=8;

			 for(i=0; i<sm[semno].psubno[semno] ; i++)
				  {
				    gotoxy(4,space);
				    cout<<"%d",sm[semno].psub[semno]);

				    gotoxy(18,space);
				    cout<<"%s",sm[semno].passdat[semno]);

				    space+=2;
				  }
			       }
			   }

		      if(flag==0)
		       {
			 cout<<"\n\nENROLLMENT NO. NOT FOUND IN ENTERED BATCH CODE..... ";
			// cout<<"\n\nPLEASE CHECK YOUR BATCH CODE AGAIN IN  'STUDENT INFORNATION SECTION'";
		       }

		     getch();
		     clrscr();

		     cout<<"\n\n\n\nSHOW ANOTHER RECORD (Y/N).....?  :  ";
		     fflush(stdin);
		     another = getche();

		   }

		   break;        */
