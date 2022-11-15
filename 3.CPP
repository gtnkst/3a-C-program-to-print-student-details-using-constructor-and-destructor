#include<iostream.h>
#include<conio.h>
class stu
{
};
stu :: stu( )
{
private:
char name[20],add[20];
int roll,zip;
public:
stu ( ); ~stu( );
void read( );
void disp( );
cout<<”This is Student Details”<<endl;
}
void stu :: read( )
{
cout<<”Enter the student Name :”;
cin>>name;
cout<<”Enter the student roll no : “;
cin>>roll;
cout<<”Enter the student address :”;
cin>>add;
cout<<”Enter the Zipcode :”;
cin>>zip;
}
void stu :: disp( )
{
cout<<”Student Name :”<<name<<endl;
cout<<"Roll no is :”<<roll<<endl;
cout<<"\nAddress is :”<<add<<endl;
cout<<”Zipcode is :”<<zip;}
stu : : ~stu( )
{
cout<<”Student Detail is Closed”;
}
void main( )
{
stu s;
clrscr( );
s.read ( );
s.disp ( );
getch( );
}
