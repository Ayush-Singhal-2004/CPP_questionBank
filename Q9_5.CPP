#include<iostream.h>
#include<conio.h>
void factOfEachDig(int num)
{
	while(num!=0)
	{
		int dig=num%10,fact=1;
		for(int i=1;i<=dig;i++)
		{
			fact*=i;
		}
		cout<<fact<<endl;
		num/=10;
	}
}
void main()
{
	int num;
	clrscr();
	cout<<"Enter any number = ";
	cin>>num;
	factOfEachDig(num);
	getch();
}