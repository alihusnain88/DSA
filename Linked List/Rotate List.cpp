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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)
        {
            return head;
        }
       ListNode* temp = head;
       int size = 1;
       while(temp->next)   
       {
        temp = temp->next;
        size++;
       }
       ListNode* tail = temp;
       k = k % size;
       
       if(k) // If k is not zero
       {
         temp = head;
         for(int i = 1; i<= size -k -1; i++)
         {
            temp = temp->next;
         }
         tail->next = head;
         head = temp->next;
         temp->next = nullptr;
       }
       return head;       
    }
};