// leetcode house robber prob no 198 

// class Solution {
// public:
//     int robHelper (vector<int>&nums ,int i){
//         if(i>= nums.size()){
//             return 0;
//         }
//         //solve first case
//         int robAmt1 = nums[i] + robHelper(nums,i+2);
//         int robAmt2 = 0 + robHelper(nums,i+1);

//         return max (robAmt1 ,robAmt2);
//     }
//     int rob(vector<int>& nums) {
//         return robHelper(nums,0);
//     }
// };