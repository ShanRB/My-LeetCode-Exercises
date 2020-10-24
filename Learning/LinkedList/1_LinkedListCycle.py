"""
 Given a linked list, determine if it has a cycle in it.

To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        p1 = head
        p2 = head
        while True:
            if p1 is None or p1.next is None:
                return False
            else:
                p1 = p1.next.next
            if p2 is None or p2.next is None:
                return False
            else:
                p2 = p2.next
            if p1 == p2:
                return True