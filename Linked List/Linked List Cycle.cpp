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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)
        {
            return false;
        }
        map<ListNode*, bool> mp;
        ListNode* temp = head;
        while(temp)
        {
            if(mp[temp->next])
            {
                return true;
            }
            mp[temp] = true;
            temp = temp->next;
        }
        return false;
       
    }
};