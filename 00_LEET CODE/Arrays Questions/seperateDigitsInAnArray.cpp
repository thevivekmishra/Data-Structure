// leetcode seperate digits in an array prob no 2553

// class Solution {
// public:
//     vector<int> separateDigits(vector<int>& nums) {
//     vector<int>ans;
//            for (int i = 0; i < nums.size(); i++) {
//             int num = nums[i];
//             vector<int> digits;
//             while (num != 0) {
//                 int digit = num % 10;
//                 num = num / 10;
//                 digits.push_back(digit);
//             }
//             // Append digits in reverse order to maintain the original order
//             for (int j = digits.size() - 1; j >= 0; j--) {
//                 ans.push_back(digits[j]);
//             }
//         }
//         return ans;
//     }
// };