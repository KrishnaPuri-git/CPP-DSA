// C++ program to print subarray with sum as given sum
//https://www.youtube.com/watch?v=XzwUBIkR9pA
#include<bits/stdc++.h>
using namespace std;

// Function to print subarray with sum as given sum
void subArraySum(int arr[], int n, int sum)
{
	// create an empty map
	unordered_map<int, int> map;

	// Maintains sum of elements so far
	int curr_sum = 0;

	for (int i = 0; i < n; i++)
	{
		// add current element to curr_sum
		curr_sum = curr_sum + arr[i];
		//start index of given sum is at currSum - givenSum


		// if curr_sum is equal to target sum
		// we found a subarray starting from index 0
		// and ending at index i
		if (curr_sum == sum)
		{
			cout << "Sum found between indexes "
				<< 0 << " to " << i << endl;
			return;
		}

		// If curr_sum - sum already exists in map i.e start index of targetsum found = pos of currsum-sum
		// we have found a subarray with target sum
		if (map.find(curr_sum - sum) != map.end())
		{
			cout << "Sum found between indexes "
				<< map[curr_sum - sum] + 1 //index+1 th index se target sum start hoga
				<< " to " << i << endl;
			return;
		}

		map[curr_sum] = i; //storing curr sum at its index
	}

	// If we reach here, then no subarray exists
	cout << "No subarray with given sum exists";
}

// Driver program to test above function
int main()
{
	int arr[] = {10, 2, -2, -20, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = -10;

	subArraySum(arr, n, sum);

	return 0;
}
// 10, 12, 10, -10, 0
//  0   1   2   3   4