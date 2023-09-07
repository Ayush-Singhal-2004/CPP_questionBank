#include<iostream.h>
#include<conio.h>
void sum(int num[])
{
	for(int i=0;i<5;i++)
	{
		int temp=num[i],sum=0;
		while(1)
		{
			int dig=temp%10;
			sum+=dig;
			temp/=10;
			if(temp==0 && sum<10)
			{
				break;
			}
			else if(sum>9)
			{
				temp=sum;
				sum=0;
			}
		}
		cout<<sum<<endl;
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
	sum(arr);
	getch();
}