// Boy or girl
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=1;
	int a=s.length();
	sort(s.begin(),s.end());
	for(int i=0;i<a-1;i++)
	{
		if(s[i]!=s[i+1])
		{
			count++;
		}
	}
	//int b=a-count;
	if(count%2==0)
	{
		cout<<"CHAT WITH HER!";
	}
	else
	{
		cout<<"IGNORE HIM!";
	}
}
