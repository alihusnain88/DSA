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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next)
        {
            return head;            
        }
        ListNode* firstEvenIndex = head->next;
        ListNode* prevOdd = head;
        ListNode* prevEven = head->next;
        ListNode* temp = head->next->next;
        while(temp)
        {
            if(temp)
            {
                prevOdd->next = temp;
                prevOdd = temp;
            temp = temp->next;
            }
            if(temp)
            {
                prevEven->next = temp;
                prevEven = temp;
            temp = temp->next;
            }
        }
        prevOdd->next = firstEvenIndex;
        prevEven->next = nullptr;
        return head;
    }
};