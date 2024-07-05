//This program prints the sorted array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5]={78,33,14,36,53};
	sort(arr,arr+5);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
		
	}
	return 0;
}
