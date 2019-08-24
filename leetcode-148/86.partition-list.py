#
# @lc app=leetcode id=86 lang=python3
#
# [86] Partition List
#
# https://leetcode.com/problems/partition-list/description/
#
# algorithms
# Medium (37.95%)
# Total Accepted:    174.9K
# Total Submissions: 458.2K
# Testcase Example:  '[1,4,3,2,5,2]\n3'
#
# Given a linked list and a value x, partition it such that all nodes less than
# x come before nodes greater than or equal to x.
#
# You should preserve the original relative order of the nodes in each of the
# two partitions.
#
# Example:
#
#
# Input: head = 1->4->3->2->5->2, x = 3
# Output: 1->2->2->4->3->5
#
#
#
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def partition(self, head: ListNode, x: int) -> ListNode:
        flag_node = ListNode(-1)
        flag_node.next = head
        pre = flag_node
        cur = head
        while pre and pre.next and pre.next.val < x:
            pre = pre.next
        cur = pre
        while cur and cur.next:
            if cur.next.val < x:
                tmp = pre.next
                pre.next = cur.next
                cur.next = cur.next.next
                pre.next.next = tmp
                pre = pre.next
            else:
                cur = cur.next
        return flag_node.next

'''
- 链表
- 指针
'''
