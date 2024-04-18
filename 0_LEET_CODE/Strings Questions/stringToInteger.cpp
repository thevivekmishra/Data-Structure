// leetcode string to integer prob.no 8

// class Solution {
// public:
//     int myAtoi(string s) {
//         int num =0, i=0, sign =1;//+ve
//         //ignore white space 
//         while(s[i]==' '){
//             i++;
//         }
//         //check sign 
//         if(i<s.size() && (s[i]=='-' || s[i] == '+')){
//            sign = s[i] == '+'? 1 : -1;
//            ++i;
//         }
//         //check range
//         while(i<s.size() && isdigit(s[i])){
//             if(num > INT_MAX/10 || (num == INT_MAX/10 && s[i]>'7')){
//                 return sign == -1 ? INT_MIN : INT_MAX;
//             }
//             num = num*10 + (s[i] - '0');
//             ++i;
//         }
//         return num*sign;
//     }
// };