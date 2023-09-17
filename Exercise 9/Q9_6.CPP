#include<iostream.h>
#include<conio.h>
void toUpperCase(char ch[])
{
	for(int i=0;ch[i]!='\0';i++)
	{
		if((int)ch[i]>=97 && (int)ch[i]<=123)
		{
			ch[i]=ch[i]-32;
		}
	}
	cout<<ch;
}
void main()
{
	char ch[30];
	clrscr();
	cout<<"Enter any string = ";
	cin>>ch;
	toUpperCase(ch);
	getch();
}
