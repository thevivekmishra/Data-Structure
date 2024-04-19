//GFG -> find first repeating element 

//1st approach----------------------------

// class Solution {
//   public:
//     int firstRepeated(int arr[], int n) 
//      {    
//       for(int i=0;i<n;i++)
//       {
//           bool isRepeated = false;
//           for(int j=i+1;j<n;j++)
//           {
//               if(arr[i]==arr[j])
//               {
//                   isRepeated = true;
//                   return i+1;
//               }
//           }
//       }
//       return -1;
//     }
// };


//2nd approach OPTIMAL SOLN.------------------------------

// class Solution {
//   public:
//     // Function to return the position of the first repeating element.
//     int firstRepeated(int arr[], int n) {
      
//       unordered_map<int,int>hash;
//       for(int i=0;i<n;i++)
//       {
//          hash[arr[i]]++;
//       }
//       for(int i=0;i<n;i++)
//       {
//           if(hash[arr[i]] > 1)
//           {
//               return i+1;  //bcz i want the index no & index start from 1 not 0 
//           }
//       }
//       return -1;
//     }
// };