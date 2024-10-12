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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next){ return true; }
        stack <int> s1;
        // stack <ListNode*> s2;
        
        ListNode* temp = head;
        while(temp)
        {
            s1.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(!s1.empty())
        {
            if(s1.top()!=temp->val)
            {
                return false;
            }
            s1.pop();
            temp = temp->next;
        }
        return true;

    }
};