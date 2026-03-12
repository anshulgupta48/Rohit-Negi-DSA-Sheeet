// ******** You are given the head of a doubly linked list. You have to reverse the doubly linked list and return its head. ********

// <======== Example ========>
// Input: NULL <- 3 <-> 4 <-> 5 -> NULL
// Output: NULL <- 5 <-> 4 <-> 3 -> NULL

// Input: NULL <- 75 <-> 122 <-> 59 <-> 196 -> NULL
// Output: NULL <- 196 <-> 59 <-> 122 <-> 75 -> NULL


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node *reverse(Node *head) {
        Node* curr = head;
        
        while(curr != NULL) {
            Node* prev = curr->prev;
            Node* next = curr->next;
            
            curr->prev = next;
            curr->next = prev;
            head = curr;
            curr = next;
        }
        
        return head;
    }
};