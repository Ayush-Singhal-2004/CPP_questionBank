#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#define SIZE 3
class Student
{
	private:
		int rollNo;
		char name[20];
		char address[30];
		char course[10];
		long phoneNo;
	public:
		Student()
		{
			rollNo = -1;
			strcpy(name,"undefined");
			strcpy(address,"undefined");
			strcpy(course,"undefined");
			phoneNo = -1;
		}
		Student(int rollNum,char stdName[20],char add[30],char stdCourse[10],long phoneNum)
		{
			rollNo = rollNum;
			strcpy(name,stdName);
			strcpy(address,add);
			strcpy(course,stdCourse);
			phoneNo = phoneNum;
		}
		int getRollNo()
		{
			return rollNo;
		}
		char * getName()
		{
			return name;
		}
		char * getAddress()
		{
			return address;
		}
		char * getCourse()
		{
			return course;
		}
		long getPhone()
		{
			return phoneNo;
		}
		void setRollNo(int rollNum)
		{
			rollNo = rollNum;
		}
		void setName(char nm[50])
		{
			strcpy(name,nm);
		}
		void setAddress(char add[50])
		{
			strcpy(address,add);
		}
		void setCourse(char c[50])
		{
			strcpy(course,c);
		}
		void setPhone(long phone)
		{
			phoneNo = phone;
		}
		void displayDetails()
		{
			cout<<"Roll number = "<<rollNo<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"Address = "<<address<<endl;
			cout<<"Course = "<<course<<endl;
			cout<<"Phone number = "<<phoneNo<<endl;
		}
};

void main()
{
	Student s[SIZE];
	clrscr();

	// Q2 :
	//taking input in array of Student objects
	for(int i=0;i<SIZE;i++)
	{
		int rollNo;
		cout<<"Enter roll number = ";
		cin>>rollNo;
		s[i].setRollNo(rollNo);

		char name[20];
		cout<<"Enter name = ";
		cin>>name;
		s[i].setName(name);

		char address[30];
		cout<<"Enter address = ";
		cin>>address;
		s[i].setAddress(address);

		char course[20];
		cout<<"Enter course = ";
		cin>>course;
		s[i].setCourse(course);

		long phoneNo;
		cout<<"Enter phone number = ";
		cin>>phoneNo;
		s[i].setPhone(phoneNo);
	}
	//displaying details of array of Student of objects
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		cout<<"Student "<<i+1<<" details : "<<"\n\n";
		s[i].displayDetails();
		sleep(3);
		clrscr();
	}

	//Q3 :
	int rollNo;
	cout<<"Enter roll number to find details = ";
	cin>>rollNo;
	for(i=0;i<SIZE;i++)
	{
		int getRollNum = s[i].getRollNo();
		if(getRollNum==rollNo)
		{
			s[i].displayDetails();
			break;
		}
	}
	if(i==SIZE)
	{
		cout<<"Invalid Roll number\n";
	}

	//Q4 :
	cout<<endl;
	int count = 0;
	char course[20];
	cout<<"Enter any Course name = ";
	cin>>course;
	for(i=0;i<SIZE;i++)
	{
		char * c=s[i].getCourse();
		int temp = strcmpi(c,course);
		if(temp==0)
		{
			count++;
		}
	}
	cout<<count<<" students are stuying in "<<course<<endl;
	sleep(3);

	//Q5 :
	clrscr();
	cout<<"Asc sorted array on the basis of roll number : \n";
	for(i=0;i<SIZE;i++)
	{
		int r1 = s[i].getRollNo();
		for(int j=i+1;j<SIZE;j++)
		{
			int r2 = s[j].getRollNo();
			if(r1>r2)
			{
				Student tempStd;
				tempStd.setRollNo(s[i].getRollNo());
				tempStd.setName(s[i].getName());
				tempStd.setAddress(s[i].getAddress());
				tempStd.setCourse(s[i].getCourse());
				tempStd.setPhone(s[i].getPhone());

				s[i].setRollNo(s[j].getRollNo());
				s[i].setName(s[j].getName());
				s[i].setAddress(s[j].getAddress());
				s[i].setCourse(s[j].getCourse());
				s[i].setPhone(s[j].getPhone());

				s[j].setRollNo(tempStd.getRollNo());
				s[j].setName(tempStd.getName());
				s[j].setAddress(tempStd.getAddress());
				s[j].setCourse(tempStd.getCourse());
				s[j].setPhone(tempStd.getPhone());
			}
		}
	}
	//displaying asc sorted object array on the basis of roll no
	for(i=0;i<SIZE;i++)
	{
		s[i].displayDetails();
	}
	sleep(3);

	//Q6
	cout<<"Sorted array on the basis of name : \n"
	for(i=0;i<SIZE;i++)
	{
		char * n1 = s[i].getName();
		for(int j=i+1;j<SIZE;j++)
		{
			char * n2 = s[j].getName();
			int temp = strcmpi(n1,n2);
			if(temp>0)
			{
				Student tempStd;
				tempStd.setRollNo(s[i].getRollNo());
				tempStd.setName(s[i].getName());
				tempStd.setAddress(s[i].getAddress());
				tempStd.setCourse(s[i].getCourse());
				tempStd.setPhone(s[i].getPhone());

				s[i].setRollNo(s[j].getRollNo());
				s[i].setName(s[j].getName());
				s[i].setAddress(s[j].getAddress());
				s[i].setCourse(s[j].getCourse());
				s[i].setPhone(s[j].getPhone());

				s[j].setRollNo(tempStd.getRollNo());
				s[j].setName(tempStd.getName());
				s[j].setAddress(tempStd.getAddress());
				s[j].setCourse(tempStd.getCourse());
				s[j].setPhone(tempStd.getPhone());
			}
		}
	}
	//displaying sorted array on the basis of name
	for(i=0;i<SIZE;i++)
	{
		s[i].displayDetails();
	}
	sleep(3);
	clrscr();

	//Q7
	cout<<"Displating details in reverse order : \n";
	for(i=SIZE-1;i>0;i--)
	{
		s[i].displayDetails();
	}
	getch();
}