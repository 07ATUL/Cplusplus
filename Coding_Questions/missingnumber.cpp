//This program checks for the missing number in a continuous program and returns the element.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[4]={1,2,3,5};
	int sum=0;
	int sum_array=0;
	sum=(5*6)/2;
	for(int i=0;i<4;i++)
	{
		sum_array+=arr[i];
	}
	int missing;
	missing = sum-sum_array;
	cout<<"The missing number is "<<missing;
}
