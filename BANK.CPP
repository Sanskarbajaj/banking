#include<iostream>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<string.h>
#include<fstream>
class account
{
private:
long ac_no;
int age,b;
float deposit,withdraw,x,y;
long mobile,c;
char name[50],a;
public:
int exits()
{        return 0;
}
/*void create_account()
{
//    cout<<"enter your name";
//cin>>name;
//cout<<"enter account number";
//cin>>ac_no;
cout<<"enter your age";
cin>>age;
cout<<"enter your mobile number";
cin>>mobile;
cout<<"enter some money to deposit  to get started";
cin>>deposit;

delay(2000);
textcolor(6);

cprintf("                   account created hurray        ");endl;
cout<<"\n";
endl;
     endl;
	  endl;
	       endl;
cout<<"loading wait"; cout<<"*"; delay(1000); cout<<"*"; delay(1000); cout<<"*"; delay(1000); cout<<"*"; delay(1000);
delay(3000);
cout<<"\n ";
}*/
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
cout<<"want to create your account"<<endl;
int t;
cout<<"yes or no"<<endl; delay(1000);
cout<<"yes==1  and no==0 ?"; endl;
cin>>t;
if(t==1)
{
cout<<"enter proper details"<<endl;     delay(2000);
account obj;
obj.create_account();




 xy:
 textcolor(5);
   endl;
       endl;
	    endl;
		 endl;
		      endl;
cout<<"*******************************************";    endl;
cout<<"*             MAIN MENU                   *";    endl;
cout<<"*  1.MODIFY             2.WITHDRAW        *";    endl;
cout<<"*  3.DEPOSIT            4.BALANCE ENQUIRY *";    endl;
cout<<"*               5.EXIT                    *";    endl;
cout<<"*******************************************";    endl;
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
default :
cout<<"entered wrong choice"<<endl;
delay(2000);
cout<<"want to choose again  1/0?"<<endl;
int t;
cin>>t;
if(t==1)
goto xy;
else
break;
}
}
getch();
return 0;
}






