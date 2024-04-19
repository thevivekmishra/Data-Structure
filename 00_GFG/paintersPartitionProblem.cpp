// GFG Painter's Partition Problem (similar to book allocation problem )

// class Solution
// {
// public:
//     bool isPossibleSolution(int a[], int n, int k, long long mid)
//     {
//         long long timeSum = 0;
//         int count = 1;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] > mid)
//             {
//                 return false;
//             }
//             if (a[i] + timeSum > mid)
//             {
//                 count++;
//                 timeSum = a[i];

//                 if (count > k)
//                 {
//                     return false;
//                 }
//             }
//             else
//             {
//                 timeSum += a[i];
//             }
//         }
//         return true;
//     }

//     long long minTime(int arr[], int n, int k)
//     {
//         long long start = 0;
//         long long end = 0;
//         for (int i = 0; i < n; i++)
//         {
//             end = end + arr[i];
//         }
//         long long ans = -1;

//         while (start <= end)
//         {
//             long long mid = start + (end - start) / 2;
//             if (isPossibleSolution(arr, n, k, mid))
//             {
//                 ans = mid;
//                 end = mid - 1;
//             }
//             else
//             {
//                 start = mid + 1;
//             }
//         }
//         return ans;
//     }
// };