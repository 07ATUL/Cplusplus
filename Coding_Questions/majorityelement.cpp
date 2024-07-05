//This program checks for majority element which appears maimum times and return its count
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10]={1,1,2,2,2,3,3,3,3,4};
	int maj=0;
	int count=0;
	for(int i=0;i<10;i++)
	{
		if(arr[i]==arr[i+1])
		{
			count++;
			
		}
		maj=arr[i];
		if(arr[i+1]>arr[i])
		{
			if(arr[i+1]==arr[i+2])
			{
				count=0;
				count++;
				
			}
			maj=arr[i-1];
		}
			
	}
	cout<<maj<<endl;
	cout<<count;
}
