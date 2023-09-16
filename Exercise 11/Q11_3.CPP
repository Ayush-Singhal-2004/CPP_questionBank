#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char * args[])
{
	clrscr();
	int count=0;
	for(int i=1;i<argc;i++)
	{
		int num=atoi(args[i]);
		if(num>99 && num<1000)
		{
			count++;
		}
	}
	cout<<count;
	getch();
}
