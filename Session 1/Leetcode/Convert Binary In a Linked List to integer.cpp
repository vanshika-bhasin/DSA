/* APPROACH
    1. count the Number of node to find the length of the Binary number [linked list iteration];
    
    Binary number = 101010;
    
    decimal number = 1*2^5 + 0*2^4 + 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0  =  42;   [we've to implement this]
    
    O(n)  [n is the size of linked list]
*/


class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int number = 0, len = 0;
        
        ListNode *node;
        node = head;
        
        while(node != nullptr)
        {
            node = node->next;
            len++;
        }
     
        node = head;
        
        while(node != nullptr)
        {
            number = number + ((node->val) * pow(2,len-1));
            len--;
            node = node->next;
        }
        
       return number;
    }
};
