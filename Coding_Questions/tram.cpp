#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int inside=0;
	int capacity=0;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		inside-=a;
		inside+=b;
		capacity=max(capacity,inside);
	}
	cout<<capacity;
}
