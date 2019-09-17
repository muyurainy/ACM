/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 *
 * https://leetcode.com/problems/min-stack/description/
 *
 * algorithms
 * Easy (38.57%)
 * Total Accepted:    343.9K
 * Total Submissions: 889.6K
 * Testcase Example:  '["MinStack","push","push","push","getMin","pop","top","getMin"]\n[[],[-2],[0],[-3],[],[],[],[]]'
 *
 * Design a stack that supports push, pop, top, and retrieving the minimum
 * element in constant time.
 *
 *
 * push(x) -- Push element x onto stack.
 * pop() -- Removes the element on top of the stack.
 * top() -- Get the top element.
 * getMin() -- Retrieve the minimum element in the stack.
 *
 *
 *
 *
 * Example:
 *
 *
 * MinStack minStack = new MinStack();
 * minStack.push(-2);
 * minStack.push(0);
 * minStack.push(-3);
 * minStack.getMin();   --> Returns -3.
 * minStack.pop();
 * minStack.top();      --> Returns 0.
 * minStack.getMin();   --> Returns -2.
 *
 *
 *
 *
 */
#include<stack>
#include<algorithm>
class MinStack {
public:
    /** initialize your data structure here. */
    std::stack<int> stack1;
    std::stack<int> stack2;
    int min;
    MinStack() {
        min = (1 << 31) - 1;
    }

    void push(int x) {
        stack1.push(x);
        min = std::min(min, x);
        stack2.push(min);
    }

    void pop() {
        stack1.pop();
        stack2.pop();
        min = stack2.empty() ? (1 << 31) - 1 : stack2.top();
    }

    int top() {
        return stack1.top();
    }

    int getMin() {
        return stack2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

/*
- 栈和队列
*/
