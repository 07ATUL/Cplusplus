#include<iostream>
using namespace std;

class Link
{
public:
	int iData;
	double dData;
	Link *pNext;
Link(int id,double dd):iData(id),dData(dd),pNext(NULL)
{
}
void displayLink()
{
	cout<<"{"<<iData<<","<<dData<<"}";
	
}
  	
};
class LinkList
{
	private:
		Link *pFirst;
	public:
		LinkList(): pFirst(NULL)
		{
		}
	bool isEmpty()
	{
		return pFirst==NULL;
		
	}
	void insertFirst(int id,double dd)
	{
		Link* pNewLink=new Link(id,dd);
		pNewLink->pNext=pFirst;
		pFirst=pNewLink;
	}
	Link* getFirst()
	{
		return pFirst;
	}
	void removeFirst()
	{
		Link* pTemp=pFirst;
		pFirst=pFirst->pNext;
		delete pTemp;
	}
	void displayList()
	{
		cout<<"List(first--->last";
		Link* pCurrent=pFirst;
		while(pCurrent!=NULL)
		{
			pCurrent->displayLink();
			pCurrent=pCurrent->pNext;
			
		}
		cout << endl;
	}
	
};
int main()
{
	LinkList theList;
	theList.insertFirst(22,4.99);
	theList.displayList();
}
