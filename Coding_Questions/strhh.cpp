//STrhh
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	int a=0;
	while(t--)
	{
		cin>>s;
		a=s.length()/2;
		for(int i=0;i<a;i+=2)
		{
			cout<<s[i];
			
		}
		cout<<endl;
	}
}
