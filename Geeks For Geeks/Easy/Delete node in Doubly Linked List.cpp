/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};
*/

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        int count = 1;
        Node* temp = head;
        while(count != x && temp)
        {
            temp = temp->next;
            count++;
        }
        if(temp == head)
        {
            head = head->next;
            delete head->prev;
        }
        else if(!temp->next)
        {
            temp->prev->next = nullptr;
            delete temp;
        }
        else
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
        return head;
    }
};