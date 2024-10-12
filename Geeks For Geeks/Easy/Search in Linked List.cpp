/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        if(!head)
        {
            return 0;
        }
        Node* temp = head;
        while(temp)
        {
            if(temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};