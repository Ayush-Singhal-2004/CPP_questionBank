#include<iostream.h>
#include<conio.h>
void twinPrime(int n1,int n2)
{
	int temp=0,a=0,b=0;
	for(int i=n1;i<=n2;i++)
	{
		for(int div=2;div<i;div++)
		{
			if(i%div==0)
			{
				break;
			}
		}
		if(i==div)
		{
			if(temp%2==0)
			{
				a=i;
			}
			else
			{
				b=i;
			}
			temp++;
			if(b-a==2)
			{
				cout<<"("<<a<<","<<b<<")"<<endl;
			}
		}
	}
}
void main()
{
	int n1,n2;
	clrscr();
	cout<<"Enter n1 = ";
	cin>>n1;
	cout<<"Enter n2 = ";
	cin>>n2;
	twinPrime(n1,n2);
	getch();
}