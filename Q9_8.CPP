#include<iostream.h>
#include<conio.h>
void swap(int & a,int & b)
{
	int temp=a;
	a=b;
	b=temp;
	cout<<a<<endl<<b;
}
void main()
{
	int n1,n2;
	clrscr();
	cout<<"Enter n1 = ";
	cin>>n1;
	cout<<"Enter n2 = ";
	cin>>n2;
	swap(n1,n2);
	getch();
}