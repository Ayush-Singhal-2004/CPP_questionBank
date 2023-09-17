#include<iostream.h>
#include<conio.h>
#include<string.h>
class Bank
{
	private:
		char name[20];
		char type[20];
		long balance;
	public:
		Bank()
		{
			strcpy(name,"undefined");
			strcpy(type,"undefined");
			balance = 2000;
		}
		void deposit(int amount)
		{
			balance+=amount;
			cout<<amount<<" is debited to your acc";
		}
		void withdraw(int amount)
		{
			if((balance-amount)>=0)
			{
				balance-=amount;
				cout<<amount<<" is credited to your acc";
			}
			else
			{
				cout<<"Not enough balance";
			}
		}
		void display()
		{
			cout<<"Name = "<<name<<endl;
			cout<<"Balance = "<<balance<<endl<<endl;
		}
};
void main()
{
	Bank b1;
	Bank b2;
	clrscr();
	b1.display();
	b2.display();
	getch();
}