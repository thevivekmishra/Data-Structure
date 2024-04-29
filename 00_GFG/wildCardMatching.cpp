// leetcode wild card entry prob no 44

// class Solution {
// public:
// bool isMatchHelper(string&s ,int si,string&p ,int pi){
//     if(si == s.size() && pi == p.size()){
//         return true;
//     }
//     if(si == s.size() && pi < p.size()){
//         while(pi < p.size()){
//             if(p[pi] != '*') return false;
//             pi++;
//         }
//         return true;
//     }
//     //sigle case
//     if(s[si] == p[pi] || '?' == p[pi]){
//         return isMatchHelper (s,si+1,p,pi+1);
//     }
//     if(p[pi]=='*'){
//         //treat * as empty or null
//         bool caseA = isMatchHelper(s,si,p,pi+1);
//         bool caseB = isMatchHelper(s,si+1,p,pi);
//         return caseA || caseB;
//         }
//        //char doesnot match
//        return false;    
// }
//     bool isMatch(string s, string p) {
//         int si = 0;
//         int pi = 0;
//         return isMatchHelper(s,si,p,pi);
//     }
// };