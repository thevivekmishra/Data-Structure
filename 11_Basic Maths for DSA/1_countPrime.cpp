// leetCode count prime prob no 204.

// 1st method using NEIVE APPROACH --------------------------------------

// class Solution {
// public:
//  bool isPrime(int n){
//    if(n <= 1){
//     return false;
//    }
//    for(int i = 2; i < n; i++){ // 1< and n> no. exist and ans return 0 
//     if(n % i == 0){
//         return false;
//     }
//    }
//    return true;
//  }
//     int countPrimes(int n) {
//         int count  =0;
//         for(int i =0;i <n ;i++){
//             if(isPrime(i)){
//                 ++count;
//             }
//         }
//         return count;
//     }
// };

// 2nd method using sqrt-------------------------------

// class Solution {
// public:
//  bool isPrime(int n){
//    if(n <= 1){
//     return false;
//    }

//    int sqrtN = sqrt(n); //using sqrt

//    for(int i = 2; i < n; i++){ 
//     if(n % i == 0){
//         return false;
//     }
//    }
//    return true;
//  }
//     int countPrimes(int n) {
//         int count  =0;
//         for(int i =0;i <n ;i++){
//             if(isPrime(i)){
//                 ++count;
//             }
//         }
//         return count;
//     }
// };

// 3rd method using Seive of eratosthenes------------------------

// class Solution {
// public:
//     int countPrimes(int n) {
//      if(n == 0) return 0;
      
//       vector<bool>prime(n,true);
//       prime[0] = prime[1] = false;

//       int ans = 0;
//       for(int i=2;i<n;i++){
//         if(prime[i]){
//             ans++;

//             int j = 2*i;
//             while(j<n){
//                 prime[j] = false;
//                 j+=i;
//             }
//         }
//       }
//       return ans;
//     }
// };