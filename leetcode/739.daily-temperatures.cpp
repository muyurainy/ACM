/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 *
 * https://leetcode.com/problems/daily-temperatures/description/
 *
 * algorithms
 * Medium (60.56%)
 * Total Accepted:    88.7K
 * Total Submissions: 146.3K
 * Testcase Example:  '[73,74,75,71,69,72,76,73]'
 *
 *
 * Given a list of daily temperatures T, return a list such that, for each day
 * in the input, tells you how many days you would have to wait until a warmer
 * temperature.  If there is no future day for which this is possible, put 0
 * instead.
 *
 * For example, given the list of temperatures T = [73, 74, 75, 71, 69, 72, 76,
 * 73], your output should be [1, 1, 4, 2, 1, 1, 0, 0].
 *
 *
 * Note:
 * The length of temperatures will be in the range [1, 30000].
 * Each temperature will be an integer in the range [30, 100].
 *
 */
#include<vector>
#include<stack>
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        std::stack<int> stack;
        std::vector<int> res(T.size(), 0);
        for (int i = 0; i < T.size(); i++){
            while(!stack.empty() && T[i] > T[stack.top()]){
                res[stack.top()] = i - stack.top();
                stack.pop();
            }
            stack.push(i);
        }
        return res;
    }
};

/*
- 栈和队列
- 动态规划
*/
