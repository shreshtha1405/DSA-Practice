/*
Problem: Max Consecutive Ones III (LeetCode 1004)

Approach:
We use the sliding window technique with two pointers.
The window is expanded by moving the right pointer.
If the number of zeros in the window exceeds k, we shrink
the window from the left until it becomes valid again.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int zeroCount = 0;
        int maxLen = 0;

        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] == 0) zeroCount++;

            while (zeroCount > k) {
                if (nums[l] == 0) zeroCount--;
                l++;
            }

            maxLen = max(maxLen, r - l + 1);
        }

        return maxLen;
    }
};
