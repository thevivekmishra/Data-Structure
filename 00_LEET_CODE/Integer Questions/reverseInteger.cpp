// leetcode reverse integer prob no 7


// class Solution {
// public:
//     int reverse(int x) 
//     {
//       int ans =0;
//       while(x!=0){
//       int digit =x%10;
//       x=x/10;
     
//       if((ans>INT_MAX/10)||(ans<INT_MIN/10))
//       {
//           return 0;
//       }
//       else{
//           ans=(ans*10)+digit;
//       }
//       }
//       return ans;

//     }
// };