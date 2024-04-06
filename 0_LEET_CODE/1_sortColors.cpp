// leetcode problem no. 75 Sort colors

// 1st approach using sort function ---> dont use X

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//     }
// };

// 2nd approach------------------------------------------------------------

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         //sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]>nums[j])
//                 {
//                     swap(nums[i],nums[j]);
//                 }
//             }
//         }
//     }
// };

// 3rd approach 0ms time complexity ---> best approach-------------------------

// class Solution
// {
// public:
//     void sortColors(vector<int> &nums)
//     {
//         int l = 0, m = 0, h = nums.size() - 1;
//         while (m <= h)
//         {
//             if (nums[m] == 0)
//             {
//                 swap(nums[l], nums[m]);
//                 l++;
//                 m++;
//             }
//             else if (nums[m] == 1)
//             {
//                 m++;
//             }
//             else
//             {
//                 swap(nums[m], nums[h]);
//                 h--;
//             }
//         }
//     }
// };