//This is a basic implementation of a structure program
#include<iostream>
using namespace std;
int main()
{
	struct book
	{
     char name;
	 float price;
	 int pages;
	 		
	};
	struct book b[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter the name,price and pages of the book \n");
		scanf("%c %f %d",&b[i].name,&b[i].price,&b[i].pages);
	}
	return 0;	
}
