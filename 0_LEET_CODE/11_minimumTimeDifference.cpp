// LeetCode Minimum time difference P.No 539;

// class Solution
// {
// public:
//     int findMinDifference(vector<string> &timePoints)
//     {
//         // convert time string into minute integer
//         vector<int> minutes;

//         for (int i = 0; i < timePoints.size(); i++)
//         {
//             string current = timePoints[i];

//             int hours = stoi(current.substr(0, 2));
//             int min = stoi(current.substr(3, 3));
//             int totalMinutes = hours * 60 + min;

//             minutes.push_back(totalMinutes);
//         }

//         sort(minutes.begin(), minutes.end());

//         int mini = INT_MAX;
//         int n = minutes.size();
//         for (int i = 0; i < n - 1; i++)
//         {
//             int diff = minutes[i + 1] - minutes[i];
//             mini = min(mini, diff);
//         }

//         int lastDiff = (minutes[0] + 1440) - minutes[n - 1]; // 24 hr = 1440 min
//         mini = min(mini, lastDiff);

//         return mini;
//     }
// };