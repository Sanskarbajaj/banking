#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
class kbc
{
private:

    long money;

public:
 char name[20];
    int age;
    char country[20];
    int ans;

kbc()
   {
     money=0;
   }
    void welcome()
    {    clrscr();


	  for(int i=0;i<240;i++)
	{ textcolor(GREEN);
	    delay(15);
	cprintf("#");

	}



    textcolor(RED);
	gotoxy(31,7);
	cprintf("WELCOME TO MY GAME");
	 delay(2000);

		   textcolor(BLUE);
		   gotoxy(0,9);
	cout<<"\n FIRST REGISTER YOURSELF";

	cout<<"\n";
	delay(3000);

    }
     void registration()
    {
      textcolor(YELLOW);
	cprintf("\n ENTER NAME");
	cin>>name;
	cprintf("\n ENTER AGE");
	cin>>age;
	cprintf("\n ENTER COUNTRY");
	cin>>country;
	delay(3000);
  textcolor(CYAN+BLINK);
  gotoxy(29,16);
cprintf("REGISTERED SUCCESSFULLY"); delay(1000); cprintf("*");  delay(1000); cprintf("*");  delay(1000); cprintf("*");  delay(1000); cprintf("*");
    }
    void loading()
    {
	  gotoxy(30,18);
		  textcolor(YELLOW);
	    cprintf("PARSING FILES .....");


	    gotoxy(62,23);
	    textcolor(BLUE);
	    cprintf("GAME IS LOADING");  delay(1000); cprintf(".");  delay(1000); cprintf(".");  delay(1000); cprintf(".");  delay(1000); cprintf(".");
		gotoxy(2,25);

	     for(int i=0;i<80;i++)
	{               textcolor(GREEN);
	    delay(200);
	cprintf("#");

	}

    }

    void rules()
    {
      clrscr();

      for(int i=0;i<=78;i++)
	   { delay(50);
	     cout<<"*";
	   }
	   for(i=0;i<=23;i++)
	   {
	   delay(50);
	   cout<<"\n *";
	    }
	 clrscr();
    textcolor(RED);
    gotoxy(26,2);
    cprintf("RULES FOR PLAYING THE GAME");
    cout<<"                                ";
    cout<<"                                ";
    cout<<"                                ";
    cout<<"                                ";
    delay(2000);
    cout<<"*"; delay(2500);
    cout<<"\n 1. There are three options 1,2&3 you have to press only 1 2 and3";
   cout<<"*"; delay(2500);
    cout<<"\n 2. Each correct answer gives you money";
   cout<<"*"; delay(2500);
   cout<<"\n 3. There is only 1 lifeline you can use to continue your game";
  cout<<"*"; delay(2500);
   cout<<"\n 4. That lifeline will give you one more chance for same question";
  cout<<"*"; delay(2500);
   cout<<"\n 5. And at last there will be bumper question worth 50,000 rs";
  cout<<"*"; delay(2500);
  cout<<"\n 6. User can play or leave the Bumper Question";
  gotoxy(50,17);
  cout<<"Terms and Conditions Applied";
  gotoxy(45,18);
  cout<<"Copyright...Sanskar_Bajaj_Pvt.Ltd ";

  gotoxy(40,21);
  cout<<"\n Press ENTER To Continue";
  getch();
    }
	void questions()
    {
    cout<<"\n Pehla Sawaal 1000 rs ke lie aapki computer screen par...";
    delay(2000);
    cout<<"\n QUES.1:- BRAIN OF COMPUTER ?";
    delay(2000);
    cout<<"\n options are...";
    delay(2000);
    cout<<"\n  1. CPU           2. MOUSE           3. KEYBOARD";
    cout<<"\n choose from 1  2 and 3";
    cin>>ans;
    if(ans==1)
    {      textcolor(CYAN);
    cprintf("\n  yippie sahi jawab");
    cout<<"\n jeet gae h 1000 rs";
    money=money+1000;
    getch();
    clrscr();
    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";
   // goto xy;
    delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
    }
    delay(3000);
    cout<<"\n Dusra Sawaal 2000 rs ke lie aapki computer screen par...";
    delay(2000);
    cout<<"\n QUES.2:- WE CAN USE GROUP OF CHARACTERS BY USING  ?";
    delay(2000);
    cout<<"\n options are...";
    delay(2000);
    cout<<"\n  1. ARRAYS           2. SRTINGS           3. CLASSES";
    cout<<"\n choose from 1  2 and 3";
    cin>>ans;
    if(ans==2)
    {
     textcolor(CYAN);
    cprintf("\n   Sahi jawab");
    cout<<"\n Jeet gae h 2000 rs";
    money=money+2000;
     getch();
    clrscr();

    }
    else
    {
    cout<<"\n afsos aapka hamara safar yhi khatam";
   // goto xy;
    delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
    }
      cout<<"\n Teesra Sawaal 3000 rs ke lie aapki computer screen par...";
    delay(2000);
    cout<<"\n QUES.3:- SQL STANDS FOR... ?";
    delay(2000);
    cout<<"\n options are...";
    delay(2000);
    cout<<"\n  1.struc. query lang.   2.stand.query lang 3.none of these";
    cout<<"\n choose from 1  2 and 3";
    cin>>ans;
    if(ans==3)
    {
     textcolor(CYAN);
    cprintf("\n  yippie sahi jawab");
    cout<<"\n jeet gae h 3000 rs";
    money=money+3000;
     getch();
    clrscr();

    getch();
    clrscr();
    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";
   // goto xy;
    delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
    }




      cout<<"\n Chotha Sawaal 4000 rs ke lie aapki computer screen par...";
    delay(2000);
    cout<<"\n QUES.1:- int float are what.?";
    delay(2000);
    cout<<"\n options are...";
    delay(2000);
    cout<<"\n  1. DATABASES     2.DATASTRUCTURES    3.DATATYPES";
    cout<<"\n choose from 1  2 and 3";
    cin>>ans;
    if(ans==3)
    {
     textcolor(CYAN);
    cprintf("\n   sahi jawab");
    cout<<"\n jeet gae h 4000 rs";
    money=money+4000;
    getch();
    clrscr();
    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";
  //  goto xy;
    delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
    }



      cout<<"\n Paanchwa Sawaal 5000 rs ke lie aapki computer screen par...";
    delay(2000);
    cout<<"\n QUES.5:- CAN WE OVERLOAD DESTRUCTOR ?";
    delay(2000);
    cout<<"\n options are...";
    delay(2000);
    cout<<"\n  1. YES           2.NO           3.CAN'T SAY";
    cout<<"\n choose from 1  2 and 3";
    cin>>ans;
    if(ans==2)
    {  textcolor(CYAN);
    cprintf("\n  yippie sahi jawab");
    cout<<"\n jeet gae h 5000 rs";
    money=money+5000;
    getch();
    clrscr();
    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";
   // goto xy;
    delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
    }
       cout<<"\n Chatta Sawaal 6000 rs ke lie aapki computer screen par...";
    delay(2000);
    cout<<"\n QUES.6:- RAM IS ...?";
    delay(2000);
    cout<<"\n options are...";
    delay(2000);
    cout<<"\n  1.PARMANENT    2.NON VOLATILE    3.VOLATILE";
    cout<<"\n choose from 1  2 and 3";
    cin>>ans;
    if(ans==3)
    {  textcolor(CYAN);
    cprintf("\n  yippie sahi jawab");
    cout<<"\n jeet gae h 6000 rs";
    money=money+6000;
    getch();
    clrscr();
    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";
   // goto xy;
    delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
    }
     cout<<"\n Saatva Sawaal 7000 rs ke lie aapki computer screen par...";
    delay(2000);
    cout<<"\n QUES.7:- REUSABILITY OF CODE IS DONE BY.. ?";
    delay(2000);
    cout<<"\n options are...";
    delay(2000);
    cout<<"\n  1.POLYMORPHISM   2.ABSTRACTION 3.INHERITANCE";
    cout<<"\n choose from 1  2 and 3";
    cin>>ans;
    if(ans==3)
    {  textcolor(CYAN);
    cprintf("\n Sahi jawab");
    cout<<"\n Jeet gae h 7000 rs";
    money=money+7000;
    getch();
    clrscr();
    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";
  //  goto xy;
    delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
    }
    cout<<"\n Aathva Sawaal 8000 rs ke lie aapki computer screen par...";
    delay(2000);
    cout<<"\n QUES.8:-AMBIGUITY CAN RESOLVED BY WHICH OPERATOR ?";
    delay(2000);
    cout<<"\n options are...";
    delay(2000);
    cout<<"\n  1.(||)        2.(::)	   3. (%)";
    cout<<"\n choose from 1  2 and 3";
    cin>>ans;
    if(ans==2)
    {  textcolor(CYAN);
    cprintf("\n  yippie sahi jawab");
    cout<<"\n jeet gae h 8000 rs";
    money=money+8000;
    getch();
    clrscr();
    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";
   // goto xy;
    delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
    }
    cout<<"\n Ye Hai Ninth Ques 9000 rs ke lie aapki computer screen par...";
    delay(2000);
    cout<<"\n QUES.1:-HOW MANY STORAGE CLASSES IN C ?";
    delay(2000);
    cout<<"\n options are...";
    delay(2000);
    cout<<"\n  1. (4)        2. (6)        3. (2)";
    cout<<"\n choose from 1  2 and 3";
    cin>>ans;
    if(ans==1)
    {  textcolor(CYAN);
    cprintf("\n Mubarak ho sahi jawab");
    cout<<"\n Jeet gae h 9000 rs";
    money=money+9000;
    getch();
    clrscr();
    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";
   // goto xy;
   delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
       }
    cout<<"\n Aakhri Sawaal 10,000 rs ke lie aapki computer screen par...";
    delay(2000);
    cout<<"\n QUES.1:-WHICH CONVERTS MACHGINE LANGUAGE TO (.OBJ) FILE ?";
    delay(2000);
    cout<<"\n options are...";
    delay(2000);
    cout<<"\n  1.COMPILER        2.LINKER           3. LOADER";
    cout<<"\n choose from 1  2 and 3";
    cin>>ans;
    if(ans==2)
    {  textcolor(CYAN);
    cprintf("\n  ADHBUDH...");
    cout<<"\n JEET GAE HAI 10000 RS";
    money=money+10000;
    getch();
    clrscr();
    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";
//    goto xy;
delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
    }

    }

    void bumper()
    {    char x; x='y';
       cout<<" \n WANNA PLAY BUMPER QUESTION WORTH 50,000 Rs.";
	cout<<"\n                y/n ???       ";
	cin>>x;
	if(x=='y')
	{ cout<<"\n New Language For Android App Development";\
	cout<<"\n options are..";
	cout<<"\n 1.Java     2.Kotlin   3.Python";
	cin>>ans;
	if(ans==2)
	{ cout<<"\n Sahi Jawaab Mubarak Ho";
	cout<<"Jeet Gae Hai 50000 Bumper Ques.....";
	money=money+50000;
	   delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
	}
	else
	{
	cout<<"\n afsos ke sath aapka hmara safar khatam";
	     delay(2000);
		 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;
	getch();
	exit(1);
 }
	  }

    }
    void thanks()
    {       clrscr();
    delay(3000);
     textcolor(RED+BLINK);
     gotoxy(40,16);
    cout<<"Thanks for Playing ";
    }
 //   void showdetails()
  //  {

   //	 textcolor(YELLOW);
     //	cprintf(" NAME IS  ");
       //	 cout<<name;
//	cprintf(" AGE IS  ");
  //	cout<<age;
    //	cprintf(" COUNTRY IS ");
      //	cout<<country;
       //	cprintf("TOTAL MONEY IS = ");
       //	cout<<money;

//    }


};
int main()
{
clrscr();

int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(YELLOW);
setbkcolor(MAGENTA);
settextstyle(3,0,5);
outtextxy(35,35,"SWAGAT HAI AAPKA KBC MEIN... ");
for(int j=0;j<=100;j++)
{ delay(100);
circle(100+j,300,100);
}      settextstyle(4,0,3);
outtextxy(100,420,"PRESS ENTER TO CONTINUE...");

 //  kbc obj;
  //  obj.welcome();
 //   obj.registration();
//	ofstream of;
     //	of.open("databases.doc",ios::out|ios::app);
   //	of<<obj.name<<"\n";
   //	of<<obj.age<<"\n";
   //	of<<obj.country<<"\n";
   //	of<<"\n \n ";
  //	of.close();
//   obj.loading();
//  clrscr();
//  obj.rules();
 //  clrscr();
 //  obj.questions();
 //   obj.bumper();
//    obj.thanks();
  // obj.showdetails();
  getch();
    return 0;
}
