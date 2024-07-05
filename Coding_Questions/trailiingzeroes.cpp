// To calculate trailing zeroes at the end of n!
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int a=0;
	int zeroes=0;
	cin>>t;
	long long int num;
	while(t--)
	{
		cin>>num;
		zeroes=0;
		while(num>=5)
		{
			zeroes+=num/5;
		//	cout<<zeroes<<"\n";
			num/=5;
		//	cout<<num<<"num";
		}
		cout<<zeroes<<endl;
}
}
