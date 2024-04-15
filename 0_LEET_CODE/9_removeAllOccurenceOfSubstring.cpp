// Leetcode remove all occurence of substring Prob No 1910;

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//        int pos = s.find(part); //finding starting index 
//        while(pos != string::npos) //npos means no position 
//        {
//         s.erase(pos,part.length());
//         pos = s.find(part); //update
//        }
//         return s;
//     }
// };

// 2nd method------------------------------------------------

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while(s.length()!=0 && s.find(part)<s.length())
//         {
//             s.erase(s.find(part),part.length());
//         }
//         return s;
//     }
// };