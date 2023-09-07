#include<iostream.h>
#include<conio.h>
#include<string.h>
int add(int a,int b)
{
	return a+b;
}
/*
Error : Cannot convert char* to char[]
void add(char ch1[],char ch2[])
{
	char ch[]=strcat(ch2,ch1);
	cout<<ch;
}   */
void main()
{
	clrscr();
	cout<<add(1,4);
	getch();
}