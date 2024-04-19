// leetcode palindrome number prob.no 9

//     class Solution
// {
// public:
//     bool isPalindrome(int x)
//     {
//         if (x < 0)
//         {
//             return false;
//         }

//         int original = x; // Store the original number

//         int reversed = 0;
//         while (x > 0)
//         {
//             if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && x % 10 > INT_MAX % 10))
//             {
//                 return false;
//             }
//             int digit = x % 10;
//             reversed = reversed * 10 + digit;
//             x /= 10;
//         }

//         return original == reversed;
//     }
// };
