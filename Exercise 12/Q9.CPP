#include<iostream.h>
#include<conio.h>
class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		Date()
		{
			cout<<"Enter day =  ";
			cin>>day;
			cout<<"Enter month = ";
			cin>>month;
			cout<<"Enter year = ";
			cin>>year;
		}
		Date(int d,int m,int y)
		{
			day = d;
			month = m;
			year = y;
		}
		void input()
		{
			cout<<"Enter day =  ";
			cin>>day;
			cout<<"Enter month = ";
			cin>>month;
			cout<<"Enter year = ";
			cin>>year;
		}
		void display()
		{
			cout<<"Day = "<<day<<endl;
			cout<<"Month = "<<month<<endl;
			cout<<"Year = "<<year<<endl;
		}
};
void main()
{

}
