//This program checks for the pair of sum in array and returns the pair in a sorted array.
#include<iostream>
using namespace std;
int main()
{
	int i,j,sum;
	i=0;
	j=4;
	sum=19;
	int arr[5]={1,2,7,8,11};
	while(true)
	{
		if(arr[i]+arr[j]==sum)
		{
			cout<<"True the sum is found in the array"<<endl;
			cout<<"The pair is "<<arr[i]<<" and "<<arr[j];
			break;
		}
		if(arr[i]+arr[j]>sum)
		{
			j--;
		}
		else{
			i++;
		}
	}
	return 0;
}
