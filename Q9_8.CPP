#include<iostream.h>
#include<conio.h>
void swap(int & a,int & b)
{
	int temp=a;
	a=b;
	b=temp;
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
	cout<<n1<<endl<<n2;
	getch();
}
