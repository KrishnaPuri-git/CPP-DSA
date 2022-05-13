#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m; 
	
	// declare the adjacent matrix 
	int adj[n+1][n+1]; 
	
	// take edges as input 
	for(int i = 0;i<m;i++) {
	    int u, v; 
	    cin >> u >> v;
	    adj[u][v] = 1; //since this is for undirected graph so there is like an edge btw 1---2
	    adj[v][u] = 1; //so there will also be an edge btw 2---1
	}
	return 0;
}
