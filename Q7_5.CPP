#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[3][3];
	clrscr();
	int num[9],i=1,j=0;
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			cout<<"Enter "<<i<<" number = ";
			i++;
			cin>>arr[row][col];
			num[j]=arr[row][col];
			j++;
		}
	}
	i=8;
	for(row=2;row>=0;row--)
	{
		for(int col=2;col>=0;col--)
		{
			if(row==2 && col==2)
			{
				arr[row][col]=0;
			}
			else
			{
				arr[row][col]=num[i];
				i--;
			}
		}
	}
	for(row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			cout<<arr[row][col]<<"\t";
		}
		cout<<endl;
	}
	getch();
}