#include<sanskar.h>
class evm
{

public:

void front()
{

 int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(3,0,3);
outtextxy(220,10,"WELCOME TO EVM");
rectangle(170,40,470,430);
line(270,40,270,430);
line(170,120,470,120);
line(170,200,470,200);
line(170,280,470,280);
line(170,360,470,360);
settextstyle(3,0,5);
outtextxy(200,50,"1.");
outtextxy(200,130,"2.");
outtextxy(200,210,"3.");
outtextxy(200,290,"4.");
outtextxy(200,360,"5.");
outtextxy(320,50,"BJP");
outtextxy(273,130,"CONGRESS");
outtextxy(320,210,"AAP");
outtextxy(320,290,"SPA");
outtextxy(320,360,"NOTA");
gotoxy(62,15);
{textcolor(RED);
printf("Press enter to vote");
}
getch();
clrscr();
closegraph();
}
void vote()
{             int bjp=0,cng=0,nota=0,spa=0,aap=0,party;
int n;
cout<<"ENTER TOTAL NUMBER OF VOTERS"<<endl;
cin>>n;
cout<<endl;
cout<<"*** 1. BJP *******"<<endl;
cout<<"*** 2. CONGRESS **"<<endl;
cout<<"*** 3. AAP *******"<<endl;
cout<<"*** 4. SPA *******"<<endl;
cout<<"*** 5. NOTA ******"<<endl;
for(int i=0;i<n;i++)
{
cout<< "enter party number"<<endl;
cin>>party;
if(party==1)
{
bjp=bjp+1;
cout<<"TOTAL VOTES BJP:--"<<bjp<<endl;
}
else if(party==2)
{
cng=cng+1;
cout<<"TOTAL VOTES CONGRESS:--"<<cng<<endl;
}
else if(party==3)
{
aap=aap+1;
cout<<"TOTAL VOTES AAP:--"<<aap<<endl;
}
else if(party==4)
{
spa=spa+1;
cout<<"TOTAL VOTES SPA:--"<<spa<<endl;
}
else
{
nota=nota+1;
cout<<"TOTAL VOTES NOTA:--"<<nota<<endl;
}

}
}
 };
void main()
{
clrscr();
evm obj;
obj.front();
clrscr();
obj.vote();
getch();
}
