//cses missing number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x;
	long long int sum=0;
	long long int n;
	cin>>n;
	long long int a=n*(n+1)/2;
	while(n--!=1)
	{
		cin>>x;
		sum+=x;
	}
	cout<<a-sum<<endl;
}
