// class Solution {
// public:
//     string removeDuplicates(string s) {
//     //     int i = 0;
//     //     string ans = "";

//     // while (i < s.length())
//     // {
//     //         if (ans.length() > 0 && ans[ans.length() - 1] == s[i]) //comparing previous element with current ele
//     //         {
//     //             ans.pop_back();
//     //         }
//     //         else
//     //         {
//     //             ans.push_back(s[i]);
//     //         }
//     //     i++;
//     // }
//     // return ans;
//     // }


//     //using stack
//     stack<char>st;
//     for(auto ch:s){
//         if(!st.empty() && st.top()==ch){
//             st.pop();
//         }
//         else{
//             st.push(ch);
//         }
//     }
//         string ans;
//         while(!st.empty()){
//             ans += st.top();
//             st.pop();
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
    
// }