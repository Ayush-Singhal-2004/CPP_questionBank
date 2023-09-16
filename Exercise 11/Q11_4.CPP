#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char * args[])
{
	clrscr();
	int countOfVowels=0;
	for(int i=0;i<argc;i++)
	{
		char ch=*(args[i]);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			countOfVowels++;
		}
	}
	cout<<countOfVowels;
	getch();
}
