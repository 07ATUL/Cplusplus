//This only works on a program which is in sorted order



#include<iostream>
using namespace std;
int main()
{
	int arr[10]={1,2,32,44,54,62,7,81,9,10};
	int low=0;int up=9;
	int key=9;
	int mid=0;
	for(mid=(low+up)/2;low<=up;mid=(low+up)/2)
	{
		if(arr[mid]==key)
		{
			cout<<mid;
			break;
		}
		if(arr[mid]>key)
		{
			up=mid-1;
			
		}
		else{
			low=mid+1;
		}
	}
	return 0;
}
