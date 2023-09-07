#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[3][3],i=1,max=0;
	clrscr();
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			cout<<"Enter "<<i<<" number = ";
			i++;
			cin>>arr[row][col];
			if(arr[row][col]>max)
			{
				max=arr[row][col];
			}
		}
	}
	//a. Maximum number
	cout<<"Max = "<<max<<endl;

	//b. Minimum & minimum num of each row
	int min;
	for(row=0;row<3;row++)
	{
		int minRow=0,flag=1;
		for(int col=0;col<3;col++)
		{
			//min of each row
			if(flag)
			{
				minRow=arr[row][col];
				flag=0;
			}
			else if(arr[row][col]<minRow)
			{
				minRow=arr[row][col];
			}
			//minimum num
			if(row==0&&col==0)
			{
				min=arr[row][col];
			}
			else if(arr[row][col]<min)
			{
				min=arr[row][col];
			}
		}
		cout<<"Min of row "<<row+1<<" = "<<minRow<<endl;
	}
	cout<<"Min = "<<min<<endl;

	//c. Transpose of matrix
	for(int col=0;col<3;col++)
	{
		for(row=0;row<3;row++)
		{
			cout<<arr[row][col]<<"\t";
		}
		cout<<endl;
	}

	//d. Front & back diagonal with their sum
	cout<<"front diagonal :\n";
	int sum=0,count=0;
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			if(count%4==0)
			{
				sum+=arr[row][col];
				cout<<arr[row][col]<<"\t";
			}
			else
			{
				cout<<"\t";
			}
			count++;
		}
		cout<<endl;
	}
	cout<<"Sum of front diagonal = "<<sum<<endl;

	cout<<"back diagonal :\n";
	sum=0,count=0;
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			if(count%2==0 && count!=0 && count!=8)
			{
				sum+=arr[row][col];
				cout<<arr[row][col]<<"\t";
			}
			else
			{
				cout<<"\t";
			}
			count++;
		}
		cout<<endl;
	}
	cout<<"Sum of back diagonal = "<<sum<<endl;

	//e. row wise sorting
	for(row=0;row<3;row++)
	{
		int num[3]={0};
		for(col=0;col<3;col++)
		{
			num[col]=arr[row][col];
		}
		for(int i=0;i<3;i++)
		{
			for(int j=i+1;j<3;j++)
			{
				if(num[i]>num[j])
				{
					int temp=num[i];
					num[i]=num[j];
					num[j]=temp;
				}
			}
		}
		for(col=0;col<3;col++)
		{
			arr[row][col]=num[col];
		}
	}
	cout<<"sorted array : "<<endl;
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			cout<<arr[row][col]<<"\t";
		}
		cout<<endl;
	}
	getch();
}