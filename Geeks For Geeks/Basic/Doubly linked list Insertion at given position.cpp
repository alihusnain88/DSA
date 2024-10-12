

/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
    
    int count = 0;
    Node* temp = head;
    while(count != pos && temp)
    {
        temp = temp->next;
        count++;
    }
    if(temp)
    {
        if(!temp->next)
        {
    Node *newNode = new Node(data);
    temp->next = newNode;
    newNode->prev = temp;
    return;
            
        }
        
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
    }
    
}