// CPP program to count frequencies of array items
#include <bits/stdc++.h>
using namespace std;

int countFreq(vector<int> arr, int n)
{
	// unordered_map<int, int> mp;
	map<int, int> mp; //ordered is printing freq.s in asc elem order

	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;

	// Traverse through map and print frequencies
	for (auto x : mp)
		cout << x.first << " " << x.second << endl;

return mp.size();
}

int main()
{
	int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
	vector<int> numbers(arr, arr + sizeof(arr) / sizeof(int)); 
	//converted arr to vect and much quickly sorted it

	int n = sizeof(arr) / sizeof(arr[0]);
	int elems=countFreq(numbers, n);
	cout<<"distinct elems="<<elems<<endl;

return 0;
}
