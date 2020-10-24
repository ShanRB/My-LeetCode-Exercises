class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *head = NULL, *prev = NULL;
        while (l1 || l2) {
            int n1 = l1?l1->val:0;
            int n2 = l2?l2->val:0;
            int n = n1 + n2 + carry;
            carry = n / 10;
            n = n % 10;
            ListNode *node = new ListNode(n);
            if (!head)
                head = node;
            if (prev)
                prev->next = node;
            prev = node;
            l1 = l1?l1->next:NULL;
            l2 = l2?l2->next:NULL;
        }
        if (carry) {
            ListNode *node = new ListNode(1);
            prev->next = node;
        }
        return head;
    }
};