#include<iostream.h>
#include<conio.h>
void primeNums(int a,int b)
{
	int div;
	for(int i=a;i<=b;i++)
	{
		if(i>=1)
		{
			for(div=2;div<i;div++)
			{
				if(i%div==0)
				{
					break;
				}
			}
		}
		else
		{
			for(div=-1;div<i;div--)
			{
				if(i%div==0)
				{
					break;
				}
			}
		}
		if(div==i)
		{
			cout<<i<<endl;
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
	primeNums(n1,n2);
	getch();
}