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
    ListNode* swapPairs(ListNode* head) {
    if (!head || !head->next) {
        return head;
    }

    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* prev = dummy;
    ListNode* curr = head;

    while (curr && curr->next) {
        // Swap logic here
        ListNode* nextPair = curr->next->next;
        // ... (swap curr and curr->next)
        prev->next = curr->next;
        curr->next->next = curr;
        curr->next = nextPair;

        prev = curr;
        curr = nextPair;
    }

    return dummy->next;
}

};