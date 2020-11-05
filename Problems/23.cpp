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
    ListNode* merge2Lists(ListNode* l1, ListNode* l2) {
        ListNode head(0);
        ListNode *curr=&head;
        while(l1 && l2) {
            if (l1->val > l2->val) {
                curr->next = l2;
                l2 = l2->next;
            } else {
                curr->next = l1;
                l1 = l1->next;
            }
            curr = curr->next;
        }
        curr-> next = l1?l1:l2;
        return head.next;
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) 
            return NULL;
        if (lists.size() == 1) 
            return *lists.begin();
        while (lists.size() > 1) {
            lists.push_back(this->merge2Lists(*lists.begin(), *(lists.begin()+1)));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return *lists.begin();
    }
};