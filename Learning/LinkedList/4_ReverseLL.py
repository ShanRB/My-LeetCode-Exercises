""" 
Reverse a singly linked list.
"""
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if head is None:
            return head
        curr = head
        while curr.next is not None:
            currhead = head
            head = curr.next
            curr.next = head.next
            head.next = currhead
        return head