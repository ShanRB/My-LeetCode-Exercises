# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        if head is None or head.next is None:
            return head
        nexthead = head.next.next
        temp = head
        head = head.next
        head.next = temp
        head.next.next = self.swapPairs(nexthead)
        return head