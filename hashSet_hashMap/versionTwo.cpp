// C++ implementation to find the length
// of longest subarray having sum k
#include <bits/stdc++.h>
using namespace std;

// function to find the length of longest
// subarray having sum k
int lenOfLongSubarr(int arr[],
					int n,
					int k)
{

	// unordered_map 'um' implemented
	// as hash table
	unordered_map<int, int> um;
	int sum = 0, maxLen = 0;

	// traverse the given array
	for (int i = 0; i < n; i++) {

		// accumulate sum
		sum += arr[i];

		// when subarray starts from index '0'
		if (sum == k)
			maxLen = i + 1;

		// make an entry for 'sum' if it is
		// not present in 'um'
		if (um.find(sum) == um.end()) //.find(val) gives .end() is if the val isnt found in map
			um[sum] = i;

		// check if 'sum-k' is present in 'um'
		// or not
		if (um.find(sum - k) != um.end()) {

			// update maxLength , lengtg = i(last index)- um[sum - k](first index)
			if (maxLen < (i - um[sum - k]))
				maxLen = i - um[sum - k];
		}
	}

	// required maximum length
	return maxLen;
}

// Driver Code
int main()
{
	// int arr[] = {10, 5, 2, 7, 1, 9}; -first variation
    // 2nd variation is to print longest subarr having equal 0s and 1s in a array havng only 0s and 1s
    // this can be handeled by chnaging all 0s to -1s in input arr then find longest subarr with sum(k)=0
    int arr[] = {1,1,0,1,1,0,0};
	int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }


	int k = 0;
	cout << "Length = "
		<< lenOfLongSubarr(arr, n, k);
	return 0;
}
