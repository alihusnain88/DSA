class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
        {
            return head;
        }
        priority_queue <int, vector<int>, greater<int>> pq;
        ListNode* temp = head;
        while(temp)
        {
            pq.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp)
        {
            temp->val = pq.top();
            pq.pop();
            temp = temp->next;
        }
        return head;
    }
};
