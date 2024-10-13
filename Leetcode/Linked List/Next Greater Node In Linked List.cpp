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
    vector<int> nextLargerNodes(ListNode* head) {
        vector <int> v;
        if(!head){ return v; }
        // if(!head->next){ v.push_back()}
        ListNode* curr = head;
        ListNode* temp;
        while(curr)
        {
            temp = curr->next;
        while(temp && temp->val<=curr->val)
        {
            temp = temp->next;
        }
        if(temp)
        v.push_back(temp->val);
        else
        {
        v.push_back(0);
        }
        curr = curr->next;
        }

        return v;        
    }
};