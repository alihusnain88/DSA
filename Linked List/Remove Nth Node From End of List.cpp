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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr && n==1){
            delete head;
            head = nullptr;
            return head;
        }
        
        int size=0;
        if(head != nullptr){           
            ListNode* temp = head;
            // if(n==1){
            //     head = head->next;
            //     delete temp;
            //     return head;
            // }
            while(temp->next != nullptr){
                size++;
                temp = temp->next;
            }
            size++;
            if(size==n){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
           

            if(n<=size && n>0){
                // n = size-n; //index toggled
                temp = head;

                int i=1;
                while(i!=size-n && size-n!=0)
                {
                    if(n!=0){
                temp = temp->next;
                i++;
                }
                }
                ListNode* next = temp->next->next;
                delete temp->next;
                temp->next = next;
            }   
        }
        return head;
    }
};