/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
     
    /* Approach
    
        I .  Iterative 
            Initialize three pointers prevnode as NULL, temp as head and nextnode as NULL.
            Iterate through the linked list. In loop, do following. 
            // Before changing next of temp, 
            // store next node 
            nextode = temp->next
            // Now change next of temp 
            // This is where actual reversing happens 
            temp->next = prev 
            // Move prevnode and temp one step forward 
            prevnode = temp 
            temp = nextnode
            
                            
        (prenode,nextnod)NUll  (head)1->2->3->null 
        
                1->2->3( head = prevnode)  Null(netnode,temp)
        */
        
        if(head == nullptr || head->next == nullptr){
            return head;
        } 
    
        Node* temp = head;
        Node* prevnode = nullptr;
        Node* nextnode = nullptr;
    
        while(temp != nullptr){
            nextnode = temp->next;
            temp->next = prevnode;
            prevnode = temp;
            temp = nextnode;
        }
        
        head = prevnode;
        return head;
}
