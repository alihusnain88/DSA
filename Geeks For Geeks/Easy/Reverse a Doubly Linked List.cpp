/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        Node* prev = nullptr;
        Node* temp = head;
        // Node* next = head->next;
        while(temp)
        {
            // prev = temp;
            temp->prev = temp->next;
            temp->next = prev;
            prev = temp;
            temp = temp->prev;
            
        }
        return prev;
    }
};
