/*
Problem: Fruit Into Baskets (LeetCode 904)

Approach:
This problem is solved using the sliding window technique.
We maintain a window that contains at most two distinct fruit types.
If the number of distinct fruits exceeds two, we shrink the window
from the left until it becomes valid again.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mpp;
        int l = 0, distinct = 0, maxLen = 0;

        for (int r = 0; r < fruits.size(); r++) {
            mpp[fruits[r]]++;
            if (mpp[fruits[r]] == 1) distinct++;

            while (distinct > 2) {
                mpp[fruits[l]]--;
                if (mpp[fruits[l]] == 0) distinct--;
                l++;
            }

            maxLen = max(maxLen, r - l + 1);
        }

        return maxLen;
    }
};
