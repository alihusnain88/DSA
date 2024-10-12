/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack <ListNode*> s1;
        stack <ListNode*> s2;

        ListNode* temp = headA;
        while(temp)
        {
            s1.push(temp);
            temp = temp->next;
        }
        temp = headB;
        while(temp)
        {
            s2.push(temp);
            temp = temp->next;
        }
        temp = nullptr;
        while(!s1.empty() && !s2.empty())
        {
            if(s1.top() == s2.top())
            {
                temp = s1.top();
                s1.pop();
                s2.pop();
            }
            else
            {
                break;
            }
        }
        
        return temp;        
    }
};