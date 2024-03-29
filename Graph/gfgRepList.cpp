// A simple representation of graph using STL===list and vect rep are same thing
//https://youtu.be/1n5XPFcvxds
#include<bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v)
	{
		cout << "\n Adjacency list of vertex "<< v << "\n head ";
		for (auto x : adj[v])
		cout << "-> " << x;
		cout<<endl;
	}
}

// Driver code
int main()
{
	int V = 5;
	vector<int> adj[V]; //adjacentcy linked list

	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);

	printGraph(adj, V);
	return 0;
}
