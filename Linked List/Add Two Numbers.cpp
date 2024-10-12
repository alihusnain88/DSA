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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int digit, carry = 0;
        ListNode* t1 = l1, *t2 = l2;
        ListNode* head = nullptr, *tail = nullptr;
        while(t1 && t2)
        {
                digit = t1->val + t2->val + carry;
                carry = digit/10;
                digit %= 10;

            if(!head)
            {
                head = tail = new ListNode(digit);                
            }
            else
            {
                tail->next = new ListNode(digit);
                tail = tail->next;
            }
            t1 = t1->next;
            t2 = t2->next;
        }
        while(t1)
        {
             digit = t1->val + carry;
                carry = digit/10;
                digit %= 10; 
             if(!head)
            {
                head = tail = new ListNode(digit);                
            }
            else
            {
                tail->next = new ListNode(digit);
                tail = tail->next;
            }
            t1 = t1->next;
        }
        while(t2)
        {
             digit = t2->val + carry;
                carry = digit/10;
                digit %= 10; 
             if(!head)
            {
                head = tail = new ListNode(digit);                
            }
            else
            {
                tail->next = new ListNode(digit);
                tail = tail->next;
            }
            t2 = t2->next;
        }
        if(carry)
        {
            tail->next = new ListNode(carry);
        }
        return head;
    }
};