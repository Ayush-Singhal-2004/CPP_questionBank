#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char * args[])
{
	clrscr();
	int prime=0;
	for(int i=1;i<argc;i++)
	{
		int num=atoi(args[i]);
		for(int div=2;div<num;div++)
		{
			if(num%div==0)
			{
				break;
			}
		}
		if(div==num)
		{
			prime++;
		}
	}
	cout<<prime;
	getch();
}
