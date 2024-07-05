//Addrev
#include<iostream>
using namespace std;
int reverse(int k);
int reverse(int k)
{
	int rev=0;
	while(k!=0)
	{
		rev=rev*10;
		rev=rev + k%10;
		k=k/10;
	}
	return rev;
}

int main()
{
	int t;
	int result=0;
	cin>>t;
	int a,b;
	while(t--)
	{
		cin>>a>>b;
		result = reverse(a)+reverse(b);
		result = reverse(result);
		cout<<result<<endl;
	}
}

