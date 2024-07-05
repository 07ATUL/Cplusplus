//This program calculates the number of inversions in an array
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int inversion=0;
	int arr[]={2,4,1,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i = 0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				inversion++;
			}
		}
	}
	cout<<"The number of inversions is "<<inversion;
}
