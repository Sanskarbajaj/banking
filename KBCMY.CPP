#include<sanskar.h>
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
	if(age<18)
	{  clrscr();
	cprintf("unable to register");
	delay(2500);
	cout<<"exiting from program";
	delay(1700);
	exit(1);
	}
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
    cout<<""; delay(2500);
    cout<<"\n 1. There are three options 1,2&3 you have to press only 1 2 and3";
   cout<<""; delay(2500);
    cout<<"\n 2. Each correct answer gives you money";
   cout<<""; delay(2500);
   cout<<"\n 3. There is only 1 lifeline you can use to continue your game";
  cout<<""; delay(2500);
   cout<<"\n 4. That lifeline will give you one more chance for same question";
  cout<<""; delay(2500);
   cout<<"\n 5. And at last there will be bumper question worth 50,000 rs";
  cout<<""; delay(2500);
  cout<<"\n 6. User can play or leave the Bumper Question";
  cout<<""; delay(2500);
  cout<<"\n 7. If you lose the bumper ques 20,000 rs will be deducted ";
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
    cout<<"\n choose from 1  2 and 3"<<endl;
    lifeline(1);
     cout<<endl;
     cout<<"now answer the ques ";
    cin>>ans;
    if(ans==1)
    {      textcolor(CYAN);
    cprintf("\n  yippie sahi jawab");
    cout<<"\n jeet gae h 1000 rs";
    money=money+1000;
    getch();
    clrscr();
     int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setbkcolor(BLACK);
    closegraph();
    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";

    delay(2000);
	showdetails();
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
    cout<<"\n choose from 1  2 and 3"<<endl;
    lifeline(2);
     cout<<endl;
     cout<<"now answer the ques ";
    cin>>ans;
    if(ans==2)
    {
     textcolor(CYAN);
    cprintf("\n   Sahi jawab");
    cout<<"\n Jeet gae h 2000 rs";
    money=money+2000;
     getch();
    clrscr();   int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setbkcolor(BLACK);
    closegraph();

    }
    else
    {
    cout<<"\n afsos aapka hamara safar yhi khatam";

    delay(2000);
	showdetails();
	getch();
	exit(1);
    }
      cout<<"\n Teesra Sawaal 3000 rs ke lie aapki computer screen par...";
    delay(2000);
    cout<<"\n QUES.3:- SQL STANDS FOR... ?";
    delay(2000);
    cout<<"\n options are...";
    delay(2000);
    cout<<"\n  1.strum. query lang.   2.stand.query lang 3.none of these";
    cout<<"\n choose from 1  2 and 3"<<endl;
    lifeline(3);
     cout<<endl;
     cout<<"now answer the ques ";
    cin>>ans;
    if(ans==3)
    {
     textcolor(CYAN);
    cprintf("\n  yippie sahi jawab");
    cout<<"\n jeet gae h 3000 rs";
    money=money+3000;
     getch();
    clrscr(); int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setbkcolor(BLACK);
    closegraph();
    getch();
    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";

    delay(2000);
	showdetails();
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
    cout<<"\n choose from 1  2 and 3"<<endl;
    lifeline(3);
     cout<<endl;
     cout<<"now answer the ques ";
    cin>>ans;
    if(ans==3)
    {
     textcolor(CYAN);
    cprintf("\n   sahi jawab");
    cout<<"\n jeet gae h 4000 rs";
    money=money+4000;
    getch();
    clrscr(); int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setbkcolor(BLACK);
    closegraph();

 }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";

    delay(2000);
	showdetails();
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
    cout<<"\n choose from 1  2 and 3"<<endl;
    lifeline(2);
     cout<<endl;
     cout<<"now answer the ques ";
    cin>>ans;
    if(ans==2)
    {  textcolor(CYAN);
    cprintf("\n  yippie sahi jawab");
    cout<<"\n jeet gae h 5000 rs";
    money=money+5000;
    getch();
    clrscr();  int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setbkcolor(BLACK);
    closegraph();

    }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";

    delay(2000);
	showdetails();
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
    cout<<"\n choose from 1  2 and 3"<<endl;
    lifeline(3);
     cout<<endl;
     cout<<"now answer the ques ";
    cin>>ans;
    if(ans==3)
    {  textcolor(CYAN);
    cprintf("\n  yippie sahi jawab");
    cout<<"\n jeet gae h 6000 rs";
    money=money+6000;
    getch();
    clrscr();
  int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setbkcolor(BLACK);
    closegraph();
     }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";

    delay(2000);
	showdetails();
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
    cout<<"\n choose from 1  2 and 3"<<endl;
    lifeline(3);
     cout<<endl;
     cout<<"now answer the ques ";
    cin>>ans;
    if(ans==3)
    {  textcolor(CYAN);
    cprintf("\n Sahi jawab");
    cout<<"\n Jeet gae h 7000 rs";
    money=money+7000;
    getch();
    clrscr();
   int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setbkcolor(BLACK);
    closegraph();
     }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";

    delay(2000);
	showdetails();
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
    cout<<"\n choose from 1  2 and 3"<<endl;
    lifeline(2);
     cout<<endl;
     cout<<"now answer the ques ";
    cin>>ans;
    if(ans==2)
    {  textcolor(CYAN);
    cprintf("\n  yippie sahi jawab");
    cout<<"\n jeet gae h 8000 rs";
    money=money+8000;
    getch();
    clrscr();
  int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setbkcolor(BLACK);
    closegraph();
     }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";

    delay(2000);
	showdetails();
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
    cout<<"\n choose from 1  2 and 3"<<endl;
    lifeline(1);
     cout<<endl;
     cout<<"now answer the ques ";
    cin>>ans;
    if(ans==1)
    {  textcolor(CYAN);
    cprintf("\n Mubarak ho sahi jawab");
    cout<<"\n Jeet gae h 9000 rs";
    money=money+9000;
    getch();
    clrscr();
  int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setbkcolor(BLACK);
    closegraph();
      }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";

   delay(2000);
	showdetails();
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
    cout<<"\n choose from 1  2 and 3"<<endl;
    lifeline(1);
     cout<<endl;
     cout<<"now answer the ques ";
    cin>>ans;
    if(ans==1)
    {  textcolor(CYAN);
    cprintf("\n  ADHBUDH...");
    cout<<"\n JEET GAE HAI 10000 RS";
    money=money+10000;
    getch();
    clrscr();
    int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setbkcolor(BLACK);
    closegraph();

   }
    else
    {
    cout<<"\n afsos aapka hamara safar khatam";
delay(2000);
	showdetails();
	getch();
	exit(1);
    }

    }

    void bumper()
    {    char x; x='y';
	      int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(RED);
     settextstyle(5,0,5);
outtextxy(45,35," BUMPER QUESTION..");
    getch();
    setcolor(YELLOW);
    gotoxy(55,9);
       cout<<" \n       WANNA PLAY BUMPER QUESTION WORTH 50,000 Rs."<<endl;
	cout<<"\n                         y/n ???       ";
	cin>>x;
		 cout<<"You Have only 30 Secs To Answer"<<endl;
		 delay(2000);
		 cout<<"and 8 sec to read the ques";
		 delay(1700);
	if(x=='y')
	{ cout<<"\n New Language For Android App Development";
	cout<<"\n options are..";
	cout<<"\n 1.Java     2.Kotlin   3.Python"<<endl;
/*	cout<<"READ THE QUES FAST"<<endl; delay(8000);
	cout<<"timer starts now and think answer"<<endl;
  textcolor(BLACK);	for(int i=30;i>0;i--)
{
  textcolor(BLACK);
gotoxy(17,38);
cout<<i;
clrscr();
delay(600);

}
				       setcolor(BLACK);
	   outtextxy(300,300,"Now Answer The Question!!!");  */
     cout<<"answer it";
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
	closegraph();
	getch();
	exit(1);
	}
	else
	{
	money=money-20000;
	cout<<"\n afsos ke sath aapka hmara safar khatam";
	     delay(2000);
	     showdetails();
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
    void showdetails()
   {
	 textcolor(YELLOW);
	cprintf(" NAME IS  ");
	 cout<<name;
	cprintf(" AGE IS  ");
	cout<<age;
	cprintf(" COUNTRY IS ");
	cout<<country;
	cprintf("TOTAL MONEY IS = ");
	cout<<money;

    }
    void swagat()
    {
    int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(YELLOW);
setbkcolor(MAGENTA);
settextstyle(3,0,5);
outtextxy(35,35,"SWAGAT HAI AAPKA KBC MEIN...\a \a \a ");
for(int j=0;j<=100;j++)
{ delay(100);
circle(100+j,300,100);
}      settextstyle(5,0,5);
outtextxy(130,420,"PRESS ENTER TO CONTINUE...");
    getch();
    closegraph();
    clrscr();
    }
    void starter()
    {
     int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(YELLOW);
setbkcolor(BLUE);
    circle(300,250,170);
    circle(300,250,180);
    ellipse(300,250,0,360,30,200);
      ellipse(300,250,0,360,200,30);
     ellipse(300,250,0,360,38,200);
    ellipse(300,250,0,360,200,38);
    settextstyle(3,0,5);
    outtextxy(80,230,"K.");
    outtextxy(290,10,"B.");
    outtextxy(500,230,"C.");
    settextstyle(3,0,4);
    outtextxy(160,230,"C R O R E P A T I");

    gotoxy(45,27);
    cout<<"press Enter to continue";
    getch();
    cleardevice();
    setcolor(YELLOW);
    outtextxy(250,195,"LOADING...");
    setcolor(GREEN);
    for(int i=1;i<190;i++)
    { setcolor(GREEN);
     delay(60);
    rectangle(210+i,170,210,190);
    }
		   cleardevice();
	closegraph();
    }
    void pass()
    {
    randomize();
     char passwd[7];
     gotoxy(30,1);
     textcolor(RED);
     cout<<"Auto Captcha Generator---->"<<endl;
     for(int j=0;j<7;j++)
     {
     passwd[j]=(rand()%26)+65;
     cout<<passwd[j];
     }
     cout<<endl;
     cout<<"ENTER THE CAPTCHA "<<endl;
     char p[7];
     int found=1;
     for(j=0;j<7;j++)
      {
      cin>>p[j];
	}
	for(j=0;j<7;j++)
	{
	if(passwd[j]==p[j])
	{
	found=0;
	}
	}
	if(found==0)
	{
	cout<<"You Are Not A Robot::"<<endl;
		    delay(1500);
		       int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

setcolor(GREEN);
circle(210,120,40);
line(180,120,200,140);
delay(1000);
line(200,140,240,100);
setcolor(GREEN);
settextstyle(3,0,5);
outtextxy(170,160,"VERIFIED..");
getch();
cleardevice();
closegraph();
	getch();

	}
	else
	{cout<<"Invalid Captcha"<<endl;delay(1000);
	cout<<"Exiting From Program"<<endl;
	getch();
	exit(1);
	clrscr();
	}
	}
	 void lifeline(int z)
	 {

	     char val;
	  static  unsigned int lyf=3;
	  gotoxy(32,9);
	  textcolor(RED);
	  cout<<"wanna try lifeline y/n ??";
	  cin>>val;
	  if(val=='y')
	  {
	  if(lyf!=0)
	  cout<<" Answer From EXPERT Is"<<z;
	  else
	  cout<<"No Lifeline Left";
	lyf=lyf-1;
	getch();
	}
	else
	delay(1000);
	}



};
int main()
{
 clrscr();
  kbc obj;
 // obj.bumper();

  obj.pass();
  obj.starter();
 obj.swagat();
   obj.welcome();
    obj.registration();
	ofstream of;
	of.open("databases.doc",ios::out|ios::app);
	of<<obj.name<<"\n";
	of<<obj.age<<"\n";
	of<<obj.country<<"\n";
	of<<"\n \n ";
	of.close();
    obj.loading();
   clrscr();
    obj.rules();
     clrscr();
    obj.questions();
    obj.bumper();
  obj.thanks();
   obj.showdetails();
    getch();
    return 0;
}
