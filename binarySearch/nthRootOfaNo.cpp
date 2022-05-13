//https://youtu.be/WjpswYrS2nY
#include <bits/stdc++.h>
using namespace std;
// double multiply(double number, int n) {
//     double ans = 1.0;
//     for(int i = 1;i<=n;i++) {
//         ans = ans * number;
//     }
//     return ans; 
// }

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
    
    cout << low << " " << high << endl; 
    
    // just to check
    cout << pow(m, (double)(1.0/(double)n)); 
}
int main() {
	int n, m;
	cin >> n >> m; 
	getNthRoot(n, m); //n th root of m , n= 3 rd root (cube root) of m= 27 is 3
	return 0;
}