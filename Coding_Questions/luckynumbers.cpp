//Lucky division codeforces
#include<iostream>
using namespace std;
bool div(int k)
{
	if(k<100)
	{
		if(k%4==0 || k%7==0)
		{
			return true;
		}
		
		if(k%47==0 || k%74==0)
		{
			return true;
			cout<<"Why";
		}
		else
		{
			return false;
		}
	}
	if(k>=100)
	{
	if(k%4==0 || k% 7==0)
		{
			return true;
		}
	if((k%444==0 || k%474==0 ) || (k%777==0 || k%747==0 ) || (k%477==0 || k%774==0 ) || (k%447==0 || k%744==0 )|| (k%47==0 || k%74==0))
	{
		return true;
	}
	else
	{
		return false;
			}		
	}
}


int main()
{
	int n;
	cin>>n;
	if(div(n))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
}
