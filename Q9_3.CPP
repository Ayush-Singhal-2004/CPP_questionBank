#include<iostream.h>
#include<conio.h>
void perfect(int num[])
{
	for(int i=0;i<5;i++)
	{
		int temp=num[i];
		int sum=0;
		for(int fact=1;fact<temp;fact++)
		{
			if(temp%fact==0)
			{
				sum+=fact;
			}
		}
		if(temp==sum)
		{
			cout<<temp;
		}
	}
}
void main()
{
	int arr[5];
	clrscr();
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	perfect(arr);
	getch();
}