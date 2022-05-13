#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m; 
	
	// at every index theres a vector ,[n+1] is there considering 1 based indexing
	vector<int> adj[n+1]; //if there are weights also then take vector of pairs vector<pair<int,int>> adj[n+1]
						  //and also in that case we will push take a 3rd input cin >> u >> v >>wt; in line 16
						  //adj[u].push_back({v,wt}); in line 17
	
	// take edges as input 
	for(int i = 0;i<m;i++) {
	    int u, v; 
	    cin >> u >> v;
	    adj[u].push_back(v); 
	    adj[v].push_back(u); //this line will not be written in case of implementing directed graph
	}

return 0;
}