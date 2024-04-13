// GFG book allocation problem

// class Solution
// {
// public:
//     bool isPossibleSolution(int A[], int N, int M, int sol)
//     {
//         int pageSum = 0;
//         int count = 1;
//         for (int i = 0; i < N; i++)
//         {
//             if (A[i] > sol) // mid is sol, suppose first book has pages > mid
//             {
//                return false;
//             }
//             if (pageSum + A[i] > sol)
//             // suppose two book allocated to 1st stud. giving 3rd book to them
//             // increases page no. than mid/sol in this case give third book to 2nd student and repeat step
//             {
//                 count++;
//                 pageSum = A[i];
//                 if (count > M)
//                 {
//                     return false;
//                 }
//             }
//             else
//             {
//                 pageSum += A[i];
//             }
//         }
//         return true;
//     }

//     // Function to find minimum number of pages.
//     int findPages(int A[], int N, int M)
//     {
//         if (M > N)
//         {
//             return -1;
//         }

//         int start = 0;
//         int end = accumulate(A, A + N, 0); // STL gives sum
//         int ans = -1;

//         while (start <= end)
//         {
//             int mid = start + (end - start) / 2;
//             if (isPossibleSolution(A, N, M, mid))
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
