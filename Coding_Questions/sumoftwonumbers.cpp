// This program clalculates the sum of two numbers
#include<iostream>
using namespace std;
int  sum(int x, int y);
int main()
{
	int a,b;
	cout<<"Please enter two numbers";
	cin>>a;
	cin>>b;
	int z=sum(a,b);
	cout<<"your expected sum of two numbers is ";
	cout<<z;
	
}
int sum(int x, int y)
{
	return x+y;
}
