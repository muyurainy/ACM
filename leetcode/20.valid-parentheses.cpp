/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (37.18%)
 * Total Accepted:    693.4K
 * Total Submissions: 1.9M
 * Testcase Example:  '"()"'
 *
 * Given a string containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 *
 * An input string is valid if:
 *
 *
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 *
 *
 * Note that an empty string is also considered valid.
 *
 * Example 1:
 *
 *
 * Input: "()"
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: "()[]{}"
 * Output: true
 *
 *
 * Example 3:
 *
 *
 * Input: "(]"
 * Output: false
 *
 *
 * Example 4:
 *
 *
 * Input: "([)]"
 * Output: false
 *
 *
 * Example 5:
 *
 *
 * Input: "{[]}"
 * Output: true
 *
 *
 */
#include<stack>
class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        for (char &c : s){
            switch(c){
                case '(': stack.push(c); break;
                case '[': stack.push(c); break;
                case '{': stack.push(c); break;
                case ')': if (stack.empty() ||  stack.top() != '(') return false; else stack.pop(); break;
                case ']': if (stack.empty() ||  stack.top() != '[') return false; else stack.pop(); break;
                case '}': if (stack.empty() ||  stack.top() != '{') return false; else stack.pop(); break;
                default: ;}
        }
        return stack.empty();
    }
};

/*
- 栈和队列
*/
