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
    void reorderList(ListNode* head) {
        if(!head || !head->next)
        {
            return;
        }
        vector<int> v;
        ListNode* temp = head;
        while(temp)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        int i = 0, j = v.size()-1;
        temp = head;
        while(i <= j)
        {
            if(temp)
            {
                temp->val = v[i++];
                temp = temp->next;
            }
            if(temp)
            {
                temp->val = v[j--];
                temp = temp->next;
            }
        }
    }
};