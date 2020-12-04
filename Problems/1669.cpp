/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr = list1, *prev;
        while (curr) {
            if (curr->val == a) {
                prev->next = list2;
            }
            if (curr->val == b) {
                ListNode* temp2 = list2;
                while (temp2->next)
                    temp2 = temp2->next;
                temp2->next = curr->next;
                break;
            } 
            prev = curr;
            curr = curr->next;                           
        }
        return list1;
    }
};