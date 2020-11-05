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
    ListNode *reverseKGroup(ListNode *head, int k) {
        if(!head||k==1) return head;
        auto  preheader = ListNode(-1);
        preheader.next = head;
         auto  len=0;
        
        for(auto cur = &preheader;cur = cur->next ;len++) ;
        
        for(auto pre = &preheader;k<=len; len-=k) {
         auto cur = pre->next;
         auto nex = cur->next;
            for(int i=1;i<k;++i) {
                cur->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=cur->next;
            }
            pre = cur;
           
        }
        return preheader.next;
    }
};