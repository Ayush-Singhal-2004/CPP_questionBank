#include<iostream.h>
#include<conio.h>
#include<string.h>
void biggestStr(char ch1[],char ch2[])
{
	int n1=strlen(ch1);
	int n2=strlen(ch2);
	if(n1>n2)
	{
		cout<<ch1;
		return;
	}
	cout<<ch2;
}
void main()
{
	char ch1[30],ch2[30];
	clrscr();
	cout<<"Enter 1st string = ";
	cin>>ch1;
	cout<<"Enter 2nd string = ";
	cin>>ch2;
	biggestStr(ch1,ch2);
	getch();
}