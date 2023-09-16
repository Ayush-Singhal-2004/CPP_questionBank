#include<iostream.h>
#include<conio.h>
#include<string.h>
void volume(int side)
{
	cout<<side*side*side<<endl;
}
void volume(int r,int h)
{
	cout<<3.14*r*r*h<<endl;
}
void main()
{
	int side=3;
	int radius=3,height=5;
	clrscr();
	volume(side);
	volume(radius,height);
	getch();
}
