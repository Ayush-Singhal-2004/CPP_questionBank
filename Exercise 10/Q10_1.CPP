#include<iostream.h>
#include<conio.h>
void max(int a,int b)
{
	if(a>b)
	{
		cout<<a;
	}
	else
	{
		cout<<b;
	}
}
void max(int a,int b,int c)
{
	if(a>b && a>c)
	{
		cout<<a;
	}
	else if(b>a && b>c)
	{
		cout<<b;
	}
	else
	{
		cout<<c;
	}
}
void max(int a,int b,int c,int d)
{
	if(a>b && a>c && a>d)
	{
		cout<<a;
	}
	else if(b>a && b>c && b>d)
	{
		cout<<b;
	}
	else if(c>a && c>b && c>d)
	{
		cout<<c;
	}
	else
	{
		cout<<d;
	}
}
void main()
{
	clrscr();
	max(2,3);
	max(1,2,3);
	max(2,4,8,6);
	getch();
}
