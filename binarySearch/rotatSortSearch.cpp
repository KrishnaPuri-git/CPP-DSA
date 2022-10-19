// class Solution {
// public:
//     int search(vector < int > & nums, int target) {
//         int low = 0, high = nums.size() - 1; //<---step 1

//         while (low <= high) { //<--- step 2
//             int mid = (low + high) / 2; //<----step 3
//             if (nums[mid] == target)
//                 return mid; // <---step 4

//             if (nums[low] <= nums[mid]) { //<---step 5 check if left side is sorted
//                 if (nums[low] <= target && nums[mid] >= target) // if in left range
//                     high = mid - 1; //<---step 6 
//                 else
//                     low = mid + 1; //<---step 7
//             }
            
//             else { //<---step 7 else it would be present in right side so search there
//                 if (nums[mid] <= target && target <= nums[high])
//                     low = mid + 1;
//                 else
//                     high = mid - 1;
//                 }
//             }
//         return -1; //<---step 8
//         //https://youtu.be/Le8bc8aHgBA
//     }
// };