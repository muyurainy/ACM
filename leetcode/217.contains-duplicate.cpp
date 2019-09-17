/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 *
 * https://leetcode.com/problems/contains-duplicate/description/
 *
 * algorithms
 * Easy (53.20%)
 * Total Accepted:    388.5K
 * Total Submissions: 728.5K
 * Testcase Example:  '[1,2,3,1]'
 *
 * Given an array of integers, find if the array contains any duplicates.
 *
 * Your function should return true if any value appears at least twice in the
 * array, and it should return false if every element is distinct.
 *
 * Example 1:
 *
 *
 * Input: [1,2,3,1]
 * Output: true
 *
 * Example 2:
 *
 *
 * Input: [1,2,3,4]
 * Output: false
 *
 * Example 3:
 *
 *
 * Input: [1,1,1,3,3,4,3,2,4,2]
 * Output: true
 *
 */

#include<unordered_map>
#include<stack>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, bool> map;
        for (int i = 0; i < nums.size(); i++){
            if (map.count(nums[i]) == 1)
                return true;
            map[nums[i]] = true;
        }
        return false;
    }
};
