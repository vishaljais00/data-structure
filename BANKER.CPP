#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

const m = 50;

  class BANK
  {
  	
    char Name[m][100];
    double Acc[m];
    char AccType[m][30];
    double bal[m];
    int count;
  public:
    void CNT(){count = 0;}  // Count initalised to zero;
    void getData();
    void display();
    void deposite();
    void withdraw();
  };

   void BANK :: getData()
   {
   cout<<"\n ********************************";
   cout<<"\n Enter the Name:   ";
   gets(Name[count]);
   cout<<"\n Enter the account no:   ";
   cin>>Acc[count];
   cout<<"\n Enter the account Type:  ";
   gets(AccType[count]);
   cout<<"\n Enter the balance:   ";
   cin>> bal[count];
   cout<<"\n ********************************";
   count++;
   }

   void BANK :: display()
   {
      int i,a;
      cout<<"\n Enter the Account no to show Detail of customer:  ";
      cin>> a;

      for (i=0; i<count; i++)

	if ( a==Acc[i])
	 { cout<<"\n+++++++++++++++++++++++++++++++++++++++++++";
	   cout<<"\n Account No: "<< Acc[i]<<"\n";
	   cout<<"\n Name of Acc member is : "<< Name[i]<<"\n";
	   cout<<"\n Account Type is:  "<< AccType[i]<<"\n";
	   cout<<"\n Balance of account no:  "<< Acc[i]<<" is "<< bal[i]<<"\n";
	   cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++";
	 }

   }
	 void BANK :: deposite()
     {
	int amt,a,i;
	cout<<"\n Enter the Acc No: ";
	cin>>a;
     for(i=0; i<count; i++)
	if(a==Acc[i])
       {
	 cout<<"\n Enter the deposite amt:  ";
	 cin>>amt;

	  bal[i] = bal[i]+amt;

	 cout<<"\n balance of ACC no: "<< Acc[i]<<" is"<< bal[i]<<"\n";
	}
 }

    void BANK :: withdraw()
   {
	int amt,a,i;
	cout<<"\n Enter the Acc No:  ";
	cin>>a;
     for(i=0; i<count; i++)
	if(a==Acc[i])
       {
	 cout<<"\n Your current balance is:  "<< bal[i];
	 cout<<"\n Enter the withdraw amt:  ";
	 cin>>amt;

	  bal[i] = bal[i]-amt;

	 cout<<"\n balance of Acc no: "<< Acc[i]<<" is"<<bal[i]<<endl;
       }
 }

   void main()
{
    clrscr();
    BANK X;
    X.CNT();
    int y;
   do
   {
      cout<<" \nChose 1 for Add New Customer";
      cout<<" \nChose 2 for Display the customer Details";
      cout<<" \nChose 3 for Add money to your account ";
      cout<<" \nChose 4 for Withdraw money:  ";
      cout<<" \nChose 5 for exit:  ";
      cout<<" \nChose your option :  ";

      cin>>y;
      switch(y)
     {
       case 1:X.getData();
       break;
       case 2:X.display();
       break;
       case 3: X.deposite();
       break;
       case 4: X.withdraw();
       break;
       case 5: break;
       default: cout<<"\n Chose right option";
     }
   }
   while(y!=5);
  getch();
}
