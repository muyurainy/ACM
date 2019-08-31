#
# @lc app=leetcode id=134 lang=python3
#
# [134] Gas Station
#
# https://leetcode.com/problems/gas-station/description/
#
# algorithms
# Medium (34.55%)
# Total Accepted:    153.1K
# Total Submissions: 442.4K
# Testcase Example:  '[1,2,3,4,5]\n[3,4,5,1,2]'
#
# There are N gas stations along a circular route, where the amount of gas at
# station i is gas[i].
#
# You have a car with an unlimited gas tank and it costs cost[i] of gas to
# travel from station i to its next station (i+1). You begin the journey with
# an empty tank at one of the gas stations.
#
# Return the starting gas station's index if you can travel around the circuit
# once in the clockwise direction, otherwise return -1.
#
# Note:
#
#
# If there exists a solution, it is guaranteed to be unique.
# Both input arrays are non-empty and have the same length.
# Each element in the input arrays is a non-negative integer.
#
#
# Example 1:
#
#
# Input:
# gas  = [1,2,3,4,5]
# cost = [3,4,5,1,2]
#
# Output: 3
#
# Explanation:
# Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 +
# 4 = 4
# Travel to station 4. Your tank = 4 - 1 + 5 = 8
# Travel to station 0. Your tank = 8 - 2 + 1 = 7
# Travel to station 1. Your tank = 7 - 3 + 2 = 6
# Travel to station 2. Your tank = 6 - 4 + 3 = 5
# Travel to station 3. The cost is 5. Your gas is just enough to travel back to
# station 3.
# Therefore, return 3 as the starting index.
#
#
# Example 2:
#
#
# Input:
# gas  = [2,3,4]
# cost = [3,4,3]
#
# Output: -1
#
# Explanation:
# You can't start at station 0 or 1, as there is not enough gas to travel to
# the next station.
# Let's start at station 2 and fill up with 4 unit of gas. Your tank = 0 + 4 =
# 4
# Travel to station 0. Your tank = 4 - 3 + 2 = 3
# Travel to station 1. Your tank = 3 - 3 + 3 = 3
# You cannot travel back to station 2, as it requires 4 unit of gas but you
# only have 3.
# Therefore, you can't travel around the circuit once no matter where you
# start.
#
#
#
class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        start, tank, total = 0, 0, 0
        for i in range(len(gas)):
            tank += (gas[i] - cost[i])
            if tank < 0:
                total += tank
                start = i+1
                tank = 0
        return (-1 if total + tank < 0 else start)


'''
对于是否有这个解，有数学定理：
    如果一个数组的总和非负，那么一定可以找到一个起始位置，从他开始绕数组一圈，累加和一直保持非负。
　　因此只要计算出一圈后加油与用油最后的总和是否大于0即可判断是否有解。
　　对于找到起始位置，可以遍历数组，假设从i开始前进，到达j的时候没油了，那么我们下一步不应该从i+1开始遍历，而是应该直接从j+1开始遍历。
　　因为如果i到j的剩余油量小于0，而i显然油量大于0，那么从i+1到j就必定更小，同理，i+2,i+3也不用考虑，所以就应该直接从j+1开始继续遍历，并保存之前欠缺的油量总和。
'''
