#
# @lc app=leetcode id=17 lang=python3
#
# [17] Letter Combinations of a Phone Number
#
# https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
#
# algorithms
# Medium (42.42%)
# Total Accepted:    431.9K
# Total Submissions: 1M
# Testcase Example:  '"23"'
#
# Given a string containing digits from 2-9 inclusive, return all possible
# letter combinations that the number could represent.
#
# A mapping of digit to letters (just like on the telephone buttons) is given
# below. Note that 1 does not map to any letters.
#
#
#
# Example:
#
#
# Input: "23"
# Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
#
#
# Note:
#
# Although the above answer is in lexicographical order, your answer could be
# in any order you want.
#
#
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        number_map = {'2': ['a', 'b', 'c'], '3': ['d', 'e', 'f'], '4': ['g', 'h', 'i'],
                      '5': ['j', 'k', 'l'], '6': ['m', 'n', 'o'], '7': ['p', 'q', 'r', 's'],
                      '8': ['t', 'u', 'v'], '9': ['w', 'x', 'y', 'z']}
        letter = ['']
        for i in digits:
            tmp = []
            for x in letter:
                for y in number_map[i]:
                    print(x, y)
                    tmp.append(x + y)
            letter = tmp
        if digits == '' or len(digits) == 0:
            return []
        return letter

'''
- 模拟
'''
