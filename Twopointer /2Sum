/*
Problem: Two Sum (LeetCode 1)

Description:
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.
Each input has exactly one solution, and the same element
cannot be used twice.

Example:
Input:
nums = [2, 7, 11, 15]
target = 9

Output:
[0, 1]

Approach:
We use an unordered_map to store elements and their indices.
For each element nums[i], we calculate:
    required = target - nums[i]

If required already exists in the map, we have found the answer.
Otherwise, store nums[i] in the map with its index.

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];

            if (mp.find(rem) != mp.end()) {
                return {mp[rem], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
