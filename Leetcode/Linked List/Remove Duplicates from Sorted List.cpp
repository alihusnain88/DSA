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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next){ return head; }
        ListNode* u = head;
        ListNode* p;
        ListNode* curr = head->next;
        while(curr)
        {
            if(curr->val != u->val)
            {
                u->next = curr;
                u = curr;
                // curr = curr->next;
            }
            else
            {
                p = curr;
                // delete p;
                p = nullptr;
                // p->next = nullptr;
            }
                curr = curr->next;
        }
        return head;
    }
};