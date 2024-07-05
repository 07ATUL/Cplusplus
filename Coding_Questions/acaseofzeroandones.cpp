// A case of zeroes and ones
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s;
	int n;
	cin>>n;
	int countz=0;
	int counto=0;
	cin>>s;
	sort(s.begin(),s.end());
	//cout<<s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		{
			countz++;
		}
		if(s[i]=='1')
		{
			counto++;
		}
		
	//	cout<<count;
	}
	cout<<abs(countz-counto);
}
