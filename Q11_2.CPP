#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char * args[])
{
	clrscr();
	int maxEven=0;
	for(int i=1;i<argc;i++)
	{
		int num=atoi(args[i]);
		if(num%2==0 && num>maxEven)
		{
			maxEven=num;
		}
	}
	cout<<maxEven;
	getch();
}