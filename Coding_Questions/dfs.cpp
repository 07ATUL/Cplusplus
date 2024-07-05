// A dfs implementation of a graph
#include<bits/stdc++.h>
using namespace std;
class Graph
{
	int V; // This is the number of vertices
	
	list<int>*adj;//Pointer to array containing adjacency list
	void DFSutil(int v, bool visited[]);
	
	public :
		Graph(int v);  // A class constructor
		
		void addEdge(int v,int w);//Function to add edge to graph with weight w
		
		void DFS(int v);
};

Graph::Graph(int V)
{
	this->V=V;
	adj=new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}
void Graph::DFSutil(int v,bool visited[])
{
	//Mark the current node as visited and print the node
	visited[v]=true;
	cout<<v<<"";
	// Recursion for all the values of vertices through this vertex
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();++i)
	{
		if(!visited[*i])
		{
			DFSutil(*i,visited);
		}
	}
}
void Graph::DFS(int v)
{
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
		
	}
	DFSutil(v,visited);
}
int main()
{
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	g.DFS(2);
}


