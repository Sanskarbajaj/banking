#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<fstream.h>
class account
{
	private:
		long ac_no;
		int age,b;
		float deposit,withdraw,x,y;
		long mobile,c;
		char name[50],a,username[50],password[50],d[20],p[20],u[20];
	public:
		 void starter()
		 {cout<<"enter whole details"<<endl;
		 }
		 void signin()
		 {cout<<"enter password for access"<<endl;
		 }




		int exits()
		{
			return 0;

		}
		void usrname()

		{ cout<<"enter name"; cin>>name;
		  ac_no=12347890;
		  age=19;
		  mobile =123454;
		  deposit=5000;
		char ans[20];
		textcolor(CYAN+BLINK);
		cout<<"username is"; cprintf("Sanskar Bajaj");endl;
		cout<<"enter password to start the main menu"<<endl;
		cin>>password;
		if(strcmp(ans,"bajaj")==0)


		cout<<"redirecting.."<<endl;  cout<<"redirecting";cout<<"."; delay(1000);cout<<"."; delay(1000);cout<<"."; delay(1000);

		}

	void create_account()
	{
		cout<<"enter your name";
		cin>>name;
		cout<<"enter account number";
		cin>>ac_no;
		cout<<"enter your age";
		cin>>age;
		cout<<"enter your mobile number";
		cin>>mobile;
cout<<"enter some money to deposit  to get started";
cin>>deposit;

delay(2000);
textcolor(CYAN+BLINK);

cprintf("                   account created hurray        ");endl;
cout<<"\n";
endl;
     endl;
	  endl;
	       endl;
cout<<"loading wait"; cout<<"*"; delay(1000); cout<<"*"; delay(1000); cout<<"*"; delay(1000); cout<<"*"; delay(1000);
delay(3000);
cout<<"\n ";
}
void showdetails()
{cout<<"your name is"<<name<<endl;
cout<<"your age is "<<age<<endl;
cout<<"your account number is "<<ac_no<<endl;
cout<<"your number is "<<mobile<<endl;
cout<<"your fresh balance is"<<deposit<<endl;
}
void modifydetails()
{
cout<<"your name is "<<name;
cout<<"modify your name";
cin>>a;
//name=a;
cout<<"modify your age";
cin>>b;
age=b;
cout<<"modify your number";
cin>>c;
mobile=c;
cout<<"change your password";
cin>>d;
//password=d;

}
void withdraws()
{cout<<"enter money you want to withdraw";
cin>>x;
deposit-=x ;
cout<<"your fresh amount is ="<<endl;
cout<<deposit;
}
void deposits()
{  cout<<"enter money you want to deposit";
cin>>y;
deposit+=y;
cout<<"your fresh amount is ="<<endl;
cout<<deposit;
}
};
int main()
{
clrscr();
account obj;
textcolor(4);
zx:
cprintf("         WELCOME TO SANSKAR BANK PVT. LTD   ");endl;
cout<<"what you want to choose"<<endl;
textcolor(YELLOW+BLINK);
cprintf(" ***** 1. Sign Up ***** \n ***** 2. Sign In *****");

int s;
cin>>s;
switch(s)
{case 1:
{obj.starter();
obj.create_account();
}
case 2:
{obj.signin();endl;
obj.usrname();
}

cout<<"\n want to create your account"<<endl;
char t;



 xy:
 textcolor(5);
   endl;
       endl;
	    endl;
		 endl;
		      endl;
cout<<"*******************************************"<<endl;
cout<<"*             MAIN MENU                   *"<<endl;
cout<<"*  1.MODIFY             2.WITHDRAW        *"<<endl;
cout<<"*  3.DEPOSIT            4.BALANCE ENQUIRY *"<<endl;
cout<<"*              5.EXIT                     *"<<endl;
cout<<"*******************************************"<<endl;
cout<<"            enter your choice         "; endl;




int n;
cin>>n;
switch(n)
{
case 1:
{ obj.modifydetails();
break;
}
case 2:
{ obj.withdraws();
break;
}
case 3:
{
obj.deposits();
break;
}
case 4:
{
obj.showdetails();
break;
}
case 5:
{
obj.exits();
break;
}
case 6:
{obj.usrname();
goto xy;
}
default :
cout<<"entered wrong choice"<<endl;
delay(2000);
cout<<"want to choose again  y/n?"<<endl;
char t1;
cin>>t1;
if(t=='y')
goto xy;
else
break;
}
}
getch();
return 0;
}






