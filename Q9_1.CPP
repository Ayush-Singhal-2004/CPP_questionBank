#include<iostream.h>
#include<conio.h>
int countDigits(int num)
{
	int count = 0;
	while(num!=0)
	{
		num/=10;
		count++;
	}
	return count;
}
void main()
{
	int num;
	clrscr();
	cout<<"Enter any number = ";
	cin>>num;
	int count = countDigits(num);
	cout<<count;
	getch();
}