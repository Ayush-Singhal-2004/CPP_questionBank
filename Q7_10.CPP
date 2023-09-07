#include<iostream.h>
#include<conio.h>
void main()
{
	int arr1[3][3],i=1;
	clrscr();
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			cout<<"Enter "<<i<<" number = ";
			i++;
			cin>>arr1[row][col];
		}
	}
	int arr2[3][3];
	for(row=0,i=1;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			cout<<"Enter "<<i<<" number = ";
			i++;
			cin>>arr2[row][col];
		}
	}
	//a. Matrix addition
	for(row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			cout<<arr1[row][col]+arr2[row][col]<<"\t";
		}
		cout<<endl;
	}
	//b. Matrix multiplication
	for(row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			cout<<arr1[row][col]*arr2[row][col]<<"\t";
		}
		cout<<endl;
	}
	getch();
}