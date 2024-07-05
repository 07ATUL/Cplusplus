#include<iostream>
#include<vector>
using namespace std;

class StackX{
	private:
		int maxsize;
		vector<double> stackVect;
		int top;
	public:
		StackX(int s): maxsize(s),top(-1)
		{
			stackVect.reserve(maxsize);//size the vector
			
		}
		void push(double j)
		{
			stackVect[++top]=j;
		}
	    double pop()
	    {
	    	return stackVect[top--];
	    	
		}
		double peek()
		{
			return stackVect[top];
			
		}
		bool isEmpty()
		{
			return (top==-1);
			
		}
		bool isFull()
		{
			return (top==maxsize-1);
		}
		
};
//End of class

int main()
{
	StackX theStack(10);
    theStack.push(20);
    theStack.push(30);
    theStack.push(40);
    theStack.push(50);
    theStack.push(60);
    theStack.push(70);
    theStack.push(90);
    theStack.push(20);
    theStack.push(20);
    theStack.push(20);
    theStack.push(21);
    theStack.push(25);
    while(!theStack.isEmpty())
    {
    	double value=theStack.pop();
    	cout<<value<<"\n";
	}
	cout<<endl;
	return 0;
}
