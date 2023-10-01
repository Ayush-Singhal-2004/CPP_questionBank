#include<iostream.h>
#include<conio.h>
#include<string.h>
#define SIZE 10
class Employee
{
    private:
        // Data members
        int empId;
        char empName[30];
        char deptName[30];
        char desigName[30];
        long salary;
    public:
        // Constructors
        Employee()
        {
            empId = -1;
            strcpy(empName,"undefined");
            strcpy(deptName,"undefined");
            strcpy(desigName,"undefined");
            salary = -1;
        }
        Employee(int id,char name[],char dept[],char desig,long sal)
        {
            empId = id;
            strcpy(empName,name);
            strcpy(deptName,dept);
            strcpy(desigName,desig);
            salary = sal;
        }
        //Methods
        void setEmpId(int id)
        {
            empId = id;
        }
        void setName(char name[])
        {
            empName = name;
        }
        void setDept(char d[])
        {
            deptName = d;
        }
        void setDesig(char d[])
        {
            desigName = d;
        }
        void setSalary(long sal)
        {
            salary = sal;
        }
        int getEmpId()
        {
            return empId;
        }
        char * getName()
        {
            return empName;
        }
        char * getDept()
        {
            return deptName;
        }
        char * getDesig()
        {
            return desigName;
        }
        long getSalary()
        {
            return salary;
        }
        void input()
        {
            cout<<"Enter Emp Id = ";
            cin>>empId;
            cin.sync();
            cout<<"Enter Emp Name = ";
            cin.getline(empName,30);
            cout<<"Enter Dept name = ";
            cin.getline(deptName,30);
            cout<<"Enter Desig name = ";
            cin.getline(desigName,30);
            cout<<"Enter basic salary = ";
            cin>>salary;
        }
        void show()
        {
            cout<<"EmpId = "<<empId<<endl;
            cout<<"EmpName = "<<empName<<endl;
            cout<<"DeptName = "<<deptName<<endl;
            cout<<"DesigName = "<<desigName<<endl;
            cout<<"Salary = "<<salary<<endl;
        }
};
//Functions
long totalSalary(Employee e[])
{
    long sal = 0;
    for(int i=0;i<SIZE;i++)
    {
        sal+=e[i].getSalary();
    }
    return sal;
}
long maxSal(Employee e[])
{
    long max = 0;
    for(int i=0;i<SIZE;i++)
    {
        if(e[i].getSalary()>max)
        {
            max = e[i].getSalary();
        }
    }
    return max;
}
int countEmpDept(Employee e[SIZE], char dept[])
{
    int count = 0;
    for(int i=0;i<SIZE;i++)
    {
        if(strcmpi(dept,e[i].getDept)==0)
        {
            count++;
        }
    }
    return count;
}
int countEmp_Dept_Desig(Employee e[],char dept[],char desig[])
{
    int count = 0;
    for(int i=0;i<SIZE;i++)
    {
        if(strcmpi(e[i].getDept(),dept)==0 && strcmpi(e[i].getDesig(),desig)==0)
        {
            count++;
        }
    }
    return count;
}
void nameStartsWithChar(Employee e[],char ch)
{
    for(int i=0;i<SIZE;i++)
    {
        char name[] = e[i].getName();
        if(name[0] == ch)
        {
            cout<<name<<endl;
        }
    }
}

void q12(Employee e[])
{
    int empId;
    cout<<"Enter any emp id = ";
    cin>>empId;
    for(int i=0;i<SIZE;i++)
    {
        if(e[i].getEmpId() == empId)
        {
            e[i].show();
            return;
        }
    }
    cout<<"Invalid emp id ";
}
void q13(Employee e[])
{
    for(int i=SIZE-1;i>=0;i--)
    {
        e[i].show();
    }
}
void q16(Employee e[])
{
    int sum = 0;
    for(int i=SIZE-1;i>=0;i--)
    {
        sum+=e[i].getSalary();
    }
    cout<<"Average sal = "<<sum/SIZE<<endl;
}
void main()
{
    Employee e[SIZE];
    clrscr();

    //input
    for(int i=0;i<SIZE;i++)
    {
        e[i].input();
    }

    //Total salary
    long totalSal = totalSal(e);

    //Max salary
    long max = maxSal(e);

    //Number of employees working in a dept
    char dept[30];
    cin.sync();
    cout<<"Enter any dept name = ";
    cin.getline(dept,30);
    int numOfEmpInDept = countEmpDept(e,dept);

    //Number of employees in a dept at desig
    cin.sync();
    cout<<"Enter any dept name = ";
    cin.getline(dept,30);
    char desig[30];
    cin.sync();
    cout<<"Enetr any desig name = ";
    cin.geline(desig,30);
    int count = countEmp_Dept_Desig(e,dept,desig);

    //name starts with given char
    char ch;
    cin.sync();
    cout<<"Enter any char = ";
    cin>>ch;
    nameStartsWithChar(e,ch);

    //Q12
    q12(e);

    //Q13
    q13(e);

    //Q16
    q16(e);
    getch();
}

