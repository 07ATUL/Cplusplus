//Gcd 
#include<iostream>
using namespace std;
int main()
{
	int t;
	long long int a,b;
	int lcm=0;
	int sum=0;
	int hcf=0;
	cin>>t;
	long long int x;
	while(t--)
	{
		cin>>x;
		lcm=0;
		hcf=0;
		for(int i=1;i<x;i++)
		{
		    a=i;
			b=x-i;
			for(int i=1;i<x;i++)
			{
				if(i%a==0 && i%b==0)
			{
			  lcm=i;
				
			}
			if(a%i==0 && b%i==0)
			{
			   hcf=i;	
			}
			sum=hcf+lcm;
			if(sum==x)
			{
			   
			   cout<<a<<"\n"<<b;
			   break;	
			}
				
				
			}
			
		}
	}
}
