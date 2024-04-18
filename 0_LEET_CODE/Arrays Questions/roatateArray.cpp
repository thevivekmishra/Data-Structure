// leetCode rotate array prob no 89

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k % n; // in case k is greater than the size of nums
        
//         // Create a new array of the same size as nums
//         vector<int> rotated(n);
        
//         // Copy the last k elements of nums into the first k positions of rotated
//         for (int i = 0; i < k; ++i) {
//             rotated[i] = nums[n - k + i];
//         }
        
//         // Copy the first n - k elements of nums into the remaining positions of rotated
//         for (int i = 0; i < n - k; ++i) {
//             rotated[k + i] = nums[i];
//         }
        
//         // Copy the elements of rotated back into nums
//         nums = rotated;
//     }
// };
