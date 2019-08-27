#
# @lc app=leetcode id=138 lang=python3
#
# [138] Copy List with Random Pointer
#
# https://leetcode.com/problems/copy-list-with-random-pointer/description/
#
# algorithms
# Medium (28.11%)
# Total Accepted:    269K
# Total Submissions: 947.8K
# Testcase Example:  '{"$id":"1","next":{"$id":"2","next":null,"random":{"$ref":"2"},"val":2},"random":{"$ref":"2"},"val":1}'
#
# A linked list is given such that each node contains an additional random
# pointer which could point to any node in the list or null.
#
# Return a deep copy of the list.
#
#
#
# Example 1:
#
#
#
#
# Input:
#
# {"$id":"1","next":{"$id":"2","next":null,"random":{"$ref":"2"},"val":2},"random":{"$ref":"2"},"val":1}
#
# Explanation:
# Node 1's value is 1, both of its next and random pointer points to Node 2.
# Node 2's value is 2, its next pointer points to null and its random pointer
# points to itself.
#
#
#
#
# Note:
#
#
# You must return the copy of the given head as a reference to the cloned
# list.
#
#
#
"""
# Definition for a Node.
class Node:
    def __init__(self, val, next, random):
        self.val = val
        self.next = next
        self.random = random
"""
class Solution:
    def copyRandomList(self, head: 'Node') -> 'Node':
        if not head:
            return None
        cur_node = head
        while cur_node:
            tmp_node = Node(cur_node.val, cur_node.next, None)
            cur_node.next = tmp_node
            cur_node = cur_node.next.next
        cur_node = head
        while cur_node:
            next_node = cur_node.next
            if cur_node.random:
                next_node.random = cur_node.random.next
            cur_node = cur_node.next.next
        new_head = Node(-1, None, None)
        cur_node = head
        cur_new_head = new_head
        while cur_node and cur_node.next:
            cur_new_head.next = cur_node.next
            cur_node.next = cur_node.next.next
            cur_node = cur_node.next
            cur_new_head = cur_new_head.next
        return new_head.next

'''
- 链表
链表很经典的题目，关键问题是解决random索引的对象还没有创建的问题。通过在原链表后表插入新对象可以巧妙的得到random的索引
'''
