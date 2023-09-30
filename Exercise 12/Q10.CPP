#include<iostream.h>
#include<conio.h>
#include<string.h>
class Music
{
	private:
		char songName[30];
		char singerName[30];
		char category[30];
		int releaseYear;
	public:
		Music()
		{
			strcpy(songName,"Undefined");
			strcpy(singerName,"Undefined");
			strcpy(category,"Undefined");
			releaseYear = -1;
		}
		void getDetails()
		{
			cout<<"Enter song name = ";
			cin.getline(songName,30);
			cout<<"Enter singer name = ";
			cin.getline(singerName,30);
			cout<<"Enter category = ";
			cin.getline(category,30);
			cout<<"Enter release year = ";
			cin>>releaseYear;
		}
		char * getSongName()
		{
			return songName;
		}
		char * getSingerName()
		{
			return singerName;
		}
		void displayDetails()
		{
			cout<<"Song name = "<<songName<<endl;
			cout<<"Singer name = "<<singerName<<endl;
			cout<<"Category = "<<category<<endl;
			cout<<"Release year = "<<releaseYear<<endl;
		}
};
void main()
{

}
