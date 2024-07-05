#include<iostream>
#include<vector>
using namespace std;
class Queue
{
	private:
		int maxsize;
		vector<int> queVect;
		int front;
		int rear;
		int nItems;
	public:
		Queue(int s):maxsize(s),front(0),rear(-1),nItems(0)
		{
			queVect.resize(maxsize);
		}
	void insert(int j)
	{
		if(rear==maxsize-1)
		{
			rear==-1;
			
		}
		queVect[++rear]=j;
		nItems++;
	}
	int remove()
	{
		int temp=queVect[front++];
		if(front==maxsize)
		{
			front=0;
			nItems--;
			
		}
		return temp;
	}
	int peekFront()
	{
		return queVect[front];
	}
	bool isEmpty()
	{
		return (nItems==0);
	}
	bool isFull()
	{
	    return (nItems==maxsize);
	}
	int size()
	{
		return nItems;
	}
};  
int main()
{
	Queue theQueue(10);
	theQueue.insert(19);
	theQueue.insert(18);
	theQueue.insert(17);
	while(!theQueue.isEmpty())
	{
		int n=theQueue.remove();
		cout<<n<<"\n";
	}
}
