#include<iostream>
using namespace std;
class Person
{
	char name[30];
	int age;
	public :
		void getdata(void);
		void display(void);
		
};
void Person :: getdata(void)
{
	cout<<"Enter the name of the person";
	cin>>name;
	cout<<"Enter the age of the person";
	cin>>age;
}
void Person :: display(void)
{
	cout<<"Name of the person is"<< name;
	cout<<"Age of the person is"<<age;
	
}




int main()
{
Person p;
p.getdata();
p.display();
}

