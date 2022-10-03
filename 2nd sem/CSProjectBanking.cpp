#include <iostream> //for basic input and output services
#include <stdio.h>
#include <stdlib.h> //output screen handling functions
#include <conio.h>
#include <fstream>
#include <string.h>
#include <windows.h>
using namespace std; //for scope
class ATM
{
	public:
	int pcode,amt,pin;
	char fname[10],sname[10],p1_name[20],p2_name[20],city[15],email[20], dob[15], type, phno[11];
	void create(); //account creation
	void writefile(); //write new records
	void banking(); //bank menu
	void withdraw(int); //cash withdraw
	void deposit(int); //cash deposit
	void display(int); //mini statement
	void delet(int); //close account
	void help(); //help page
};
void ATM :: create()
{
	system("cls"); //clear screen
	system("COLOR 06"); //Set BG and FG colour
	cout<<"------------------------------------------\n";
	cout<<"Welcome to ATM Fortune e-banking services";
	cout<<"\n\tThe new way to bank!";
	cout<<"\n------------------------------------------\n";
	cout<<"\n~~~APPLICATION FORM~~~\n";
	cout<<"\n------------------------------------------\n";
	cout<<"Enter full name: ";
	cin>>fname>>sname;
	cout<<"\nEnter Father/Guardian name: ";
	cin>>p1_name>>p2_name;
	cout<<"\nEnter Date of Birth(dd/mm/yyyy): ";
	cin>>dob;
	cout<<"\nAccount Type (S/C): ";
	cin>>type;
	cout<<"\nCity : ";
	cin>>city;
	cout<<"\nEnter Pincode : ";
	cin>>pcode;
	cout<<"\nEnter Mobile Number: ";
	cin>>phno;
	cout<<"\nEnter Email Id : ";
	cin>>email;
	cout<<"\nEnter initial amount( Minimum Rs.1000): ";
	cin>>amt;
	cout<<"\nCreate a 4 digit pin:";
	cin>>pin;
}
void ATM :: writefile()
{
	ofstream fout;
	fout.open("Accounts.dat",ios::binary|ios::app);
	create();
	fout.write((char*)this, sizeof(*this));
	cout<<"\nLoading";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	system("cls");
	cout<<"\n~~~YOUR ACCOUNT HAS SUCCESSFULLY CREATED~~~\n";
	cout<<"\nPress Enter to Continue.\n";
	getche();
	fout.close();
}
void ATM::banking()
{
	system("cls");
	system("COLOR 06");
	char bch;
	int p;
	cout<<"\n------------------------------------------\n";
	cout<<"Welcome to ATM Fortune e-banking services";
	cout<<"\n\tThe new way to bank!";
	cout<<"\n------------------------------------------\n";
	cout<<"\n\tPLEASE SELECT YOUR TRANSACTION:";
	cout<<"\n------------------------------------------\n";
	cout<<"1) Cash Withdrawal\n";
	cout<<"2) Cash Deposit\n";
	cout<<"3) Mini Statement\n";
	cout<<"4) Close Account\n";
	cout<<"------------------------------------------\n\n";
	cout<<"Enter your choice: ";
	cin>>bch;
	switch(bch)
	{
	case '1':
	cout<<"\nEnter pin: ";
	cin>>p;
	cout<<"\nLoading";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	withdraw(p);
	break;
	case '2':
	cout<<"\nEnter pin: ";
	cin>>p;
	cout<<"\nLoading";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	deposit(p);
	break;
	case '3':
	cout<<"\nEnter pin: ";
	cin>>p;
	cout<<"\nLoading";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	display(p);
	break;
	case '4':
	cout<<"\nEnter pin: ";
	cin>>p;
	cout<<"\nLoading";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	delet(p);
	break;
	default:
	cout<<"\n\nINVALID OPTION! PLEASE TRY AGAIN. \nPRESS ENTER\n\n";
	getche();
	}
}
void ATM::withdraw(int p)
{
	system("cls");
	int tamt,count=0;
	fstream f;
	f.open("Accounts.dat",ios::in|ios::out|ios::binary);
	while(f.read((char*)this, sizeof(*this)))
	{
		if(pin==p)
		{
			cout<<"\nEnter amount to withdraw: ";
			cin>>tamt;
			if (tamt<=amt)
			{
				amt=amt-tamt; //to calculate balance amount
				cout<<"\nTransation successful.Please collect your cash.";
				cout<<"\n-----------------------\n";
				cout<<"Account balance = "<<amt;
				cout<<"\n-----------------------\n";
				f.seekp(f.tellg()-sizeof(*this));
				f.write((char*)this, sizeof(*this));
			}
			else
			cout<<"\nInsufficient balance.";
			cout<<"\nPress Enter to go back.";
			count++;
			break;
		}
	}
	if(count==0)
	cout<<"\nIncorrect Pin. Try again\nPress Enter.";
	getche();
	f.close();
}

void ATM::deposit(int p)
{
	system("cls");
	int damt,count=0;
	fstream f;
	f.open("Accounts.dat",ios::in|ios::out|ios::binary);
	while(f.read((char*)this, sizeof(*this)))
	{
		if(pin==p)
		{
			cout<<"\nEnter amount to deposit: ";
			cin>>damt;
			amt=amt+damt;
			cout<<"\nAmount deposited successfully.\n";
			cout<<"\n-----------------------\n";
			cout<<"Account balance = "<<amt;
			cout<<"\n-----------------------\n";
			cout<<"\nPress Enter to go back.";
			f.seekp(f.tellg()-sizeof(*this));
			f.write((char*)this, sizeof(*this));
			count++;
			break;
		}
	}
	if (count==0)
	cout<<"\nIncorrect Pin. Try again\nPress Enter to go back.";
	getche();
	f.close();
}

void ATM :: display(int p)
{
	system("cls");
	int damt,count=0;
	ifstream fin;
	fin.open("Accounts.dat",ios::binary);
	while(fin.read((char*)this, sizeof(*this)))
	{
		if(pin==p)
		{
			cout<<"\nNAME: "<<fname<<" "<<sname;
			cout<<"\nACCOUNT TYPE: "<<type;
			cout<<"\nMOBILE NUMBER: "<<phno;
			cout<<"\n-----------------------\n";
			cout<<"ACCOUNT BALANCE: "<<amt;
			cout<<"\n-----------------------\n\n";
			cout<<"Press Enter to go back.";
			getche();
			count++;
		}
	}
	if (count==0)
	cout<<"\nIncorrect Pin. Try again\nPress Enter to go back.";
	getche();
	fin.close();
}

void ATM::delet(int p)
{
	system("cls");
	int n=0;
	ifstream fin;
	ofstream fout;
	fin.open("Accounts.dat",ios::binary);
	fout.open("Temp.dat",ios::binary);
	while(fin.read((char*)this, sizeof(*this)))
	{
	if(p!=pin)
	{
		fout.write((char*)this, sizeof(*this));
		n=1;
	}
	else n=0;
	}
	fin.close();
	fout.close();
	remove("Accounts.dat");
	rename("Temp.dat","Accounts.dat");
	if(n==1)
	cout<<"\nAccount not found.\nPress Enter to continue.";
	else
	{
		cout<<"\nAccount closed.";
		cout<<"\nPlease collect your account balance at the bank counter.\n";
		cout<<"\nPlease visit us again";
		cout<<"\nPress Enter to continue.";
	}
	getche();
}

void ATM::help()
{
	system("cls");
	system("COLOR 06");
	cout<<"------------------------------------------\n";
	cout<<"Welcome to ATM Fortune e-banking services";
	cout<<"\n\tThe new way to bank!";
	cout<<"\n------------------------------------------\n";
	cout<<"\tHELP & TIPS\t";
	cout<<"\n------------------------------------------\n";
	cout<<"\n1)Never share your pin with anybody.";
	cout<<"\n2)Do not use the ATM machine when strangers are inside the A ATM counter.";
	cout<<"\n3)In case of lost ATM card, call toll-free number and report a a immediately";
	cout<<"\n4)Should you notice anything strange or suspicious at the ATM a counter please refrain from using the same.";
	cout<<"\n------------------------------------------\n";
	cout<<"\nFOR ANY QUERIES, PLASE CONTACT OUR TOLL FREE NUMBERa 080-19030404!\n";
	cout<<"\n------------------------------------------\n";
	cout<<"\nPress Enter to go back.";
	getche();
}

int main()
{
	ATM a;
	do
	{
		system("cls");
		system("COLOR 03");
		char ch;
		cout<<"------------------------------------------\n";
		cout<<"Welcome to ATM Fortune e-banking services";
		cout<<"\n\tThe new way to bank!";
		cout<<"\n------------------------------------------\n";
		cout<<"C: Create Account\n";
		cout<<"B: Banking\n";
		cout<<"H: Help\n";
		cout<<"E: Exit";
		cout<<"\n------------------------------------------\n";
		cout<<"ENTER YOUR CHOICE: ";
		cin>>ch;
		switch(ch)
		{
			case 'C':
			case 'c':
			a.writefile();
			break;
			case 'B':
			case 'b':
			a.banking();
			break;
			case 'H':
			case 'h':
			a.help();
			break;
			case 'E':
			case 'e':
			system("cls");
			cout<<"\n-------------------------------------------\n";
			cout<<"\nTHANK YOU FOR BANKING WITH ATM FORTUNATE\n";
			cout<<"\n\tVISIT US AGAIN!\n";
			cout<<"\n-------------------------------------------\n";
			exit(0);
			default:
			cout<<"\n\nINVALID OPTION! PLEASE TRY AGAIN\n\n";
			cout<<"\nPress Enter.";
			getche();
		}
	}
	while(1);
}
