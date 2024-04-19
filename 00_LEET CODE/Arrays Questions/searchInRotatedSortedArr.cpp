// LEETCODE prob no.33 search in rotated sorted array

// class Solution
// {
// public:
//     int findPivot(vector<int> arr)
//     {
//         int start = 0;
//         int end = arr.size() - 1;

//         while (start <= end)
//         {
//             int mid = start + (end - start) / 2;
//             if (start == end)
//             {
//                 return start;
//             }
//             if (mid <= end && arr[mid] > arr[mid + 1])
//             {
//                 return mid;
//             }
//             if (mid - 1 > start && arr[mid - 1] > arr[mid])
//             {
//                 return mid - 1;
//             }
//             if (arr[start] > arr[mid])
//             {
//                 end = mid - 1;
//             }
//             else
//             {
//                 start = mid + 1;
//             }
//         }
//         return -1;
//     }

//     int binarySearch(vector<int> arr, int s, int e, int target)
//     {
//         while (s <= e)
//         {
//             int mid = s + (e - s) / 2;
//             if (arr[mid] == target)
//             {
//                 return mid;
//             }
//             if (arr[mid] > target)
//             {
//                 e = mid - 1;
//             }
//             else
//             {
//                 s = mid + 1;
//             }
//         }
//         return -1;
//     }

//     int search(vector<int> &nums, int target)
//     {

//         int pivotIndex = findPivot(nums);
//         int ans = 0;

//         if (target >= nums[0] && target <= nums[pivotIndex])
//         {
//             ans = binarySearch(nums, 0, pivotIndex, target);
//         }
//         else
//         {
//             ans = binarySearch(nums, pivotIndex + 1, nums.size() - 1, target);
//         }
//         return ans;
//     }
// };