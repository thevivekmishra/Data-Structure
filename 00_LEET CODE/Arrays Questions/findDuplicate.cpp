// LEETCODE find the duplicate number P.No.287

//First approach---------------------------------

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]==nums[j])
//                 {
//                    return nums[i];
//                 }
//             }
//         }
//         return -1;
//     }   
// };


//2nd approach----------------------------------

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) 
//     {
//            sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-1;i++)
//         {
//             if(nums[i]==nums[i+1])
//             {
//                 return nums[i];
//             }
//         }
//         return -1;
//     }   
// };

//3rd approach mark visit-----------------------

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int ans =-1;
//         for(int i=0;i<nums.size();i++)
//         {
//             int index = abs(nums[i]); //abs->absolute means no index no is in -ve

//             if(nums[index]<0) //already visited
//             {
//                 ans=index;
//                 break;
//             }
//             nums[index] *= -1;
//         }
//         return ans;
//     }   
// };

//4th approach-- less time complexity---------------------------------

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//       while(nums[0] != nums[nums[0]])
//       {
//         swap(nums[0],nums[nums[0]]);
//       }
//       return nums[0];
//     }   
// };