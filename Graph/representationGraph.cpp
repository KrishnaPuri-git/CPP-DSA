#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second

int main(){

    int n,m; //n= no of edges and m= no of nodes
    cin>>n>>m;

    //vector<vector<int>>
    vvi adjm(n+1, vi(n+1,0));

    rep(i,0,m){

        int x,y;
        cin>>x>>y;

        adjm[x][y] = 1;
        
    }

	rep(i,1,n+1){

		rep(j,1,n+1){

			cout<<adjm[i][j]<<" ";
		}

		cout<<endl;
	}
return 0;
}