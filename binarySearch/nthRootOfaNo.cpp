//https://youtu.be/WjpswYrS2nY
#include <bits/stdc++.h>
using namespace std;

double getNthRoot(int n, int m) {
    double low = 1;
    double high = m;
    double eps = 1e-6; 
    
    while((high - low) > eps) {
        double mid = (low + high) / 2.0; 
        if(pow(mid, n) < m) {
            low = mid; 
        }
        else {
            high = mid; 
        }
    }
    
    cout <<n<<"th root of "<<m<<" is "<<low<<endl;
}
int main() {
	int n, m;
	cin >> n >> m; 
	getNthRoot(n, m); //n th root of m , n= 3 rd root (cube root) of m= 27 is 3
	return 0;
}