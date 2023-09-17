#include<iostream.h>
#include<conio.h>
int highestDig(int num)
{
	int max=0;
	while(num!=0)
	{
		int dig=num%10;
		if(dig>max)
		{
			max=dig;
		}
		num/=10;
	}
	return max;
}
void main()
{
	int num;
	clrscr();
	cout<<"Enter any number = ";
	cin>>num;
	int maxDig = highestDig(num);
	cout<<maxDig;
	getch();
}
