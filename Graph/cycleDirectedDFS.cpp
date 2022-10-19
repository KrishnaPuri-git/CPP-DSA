#include<bits/stdc++.h>

using namespace std;

class Solution {
  private:
    bool checkCycle(int currNode, vector < int > adj[], int vis[], int dfsVis[]) {
      vis[currNode] = 1;
      dfsVis[currNode] = 1;
      for (auto adjNode: adj[currNode]) {
        if (!vis[adjNode]) {
          if (checkCycle(adjNode, adj, vis, dfsVis)) return true;
        } 
        else{
            if (dfsVis[adjNode]) {
                return true;
            }
        }
      }
      dfsVis[currNode] = 0;
      return false;
    }
  public:
    bool isCyclic(int N, vector < int > adj[]) {
      int vis[N], dfsVis[N];
      memset(vis, 0, sizeof vis);
      memset(dfsVis, 0, sizeof dfsVis);

      for (int i = 0; i < N; i++) {
        if (!vis[i]) {
          // cout << i << endl; 
          if (checkCycle(i, adj, vis, dfsVis)) {
            return true;
          }
        }
      }
      return false;
    }
};

void addEdge(vector < int > adj[], int u, int v) {
  adj[u].push_back(v);
  adj[v].push_back(u);
}

int main() {

  int V = 6;

  vector < int > adj[V];
  addEdge(adj, 0, 1);
  addEdge(adj, 1, 2);
  addEdge(adj, 1, 5);
  addEdge(adj, 2, 3);
  addEdge(adj, 3, 4);
  addEdge(adj, 4, 0);
  addEdge(adj, 4, 1);

  Solution obj;
  if (obj.isCyclic(V, adj))
    cout << "Cycle Detected" << "\n";
  else
    cout << "No Cycle Detected";

  return 0;
}