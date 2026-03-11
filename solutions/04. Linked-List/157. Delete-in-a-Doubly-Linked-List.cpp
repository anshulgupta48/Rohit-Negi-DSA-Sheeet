// ******** You are given a Doubly Linked List and an integer x. Remove the node at position x (positions are 1-indexed) from the list, and return the head of the updated list. ********

// <======== Example ========>
// Input: x = 3, NULL <- 1 <-> 3 <-> 4 -> NULL
// Output: 1 <-> 3

// Input: x = 1, NULL <- 1 <-> 5 <-> 2 <-> 9 -> NULL
// Output: 5 <-> 2 <-> 9


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* delPos(Node* head, int x) {
        Node* temp = head;
        int count = 1;
        
        if(x == 1) {
            temp->next->prev = NULL;
            temp = temp->next;
            return temp;
        }
        
        while(count < x-1) {
            count++;
            temp = temp->next;
        }
        
        if(temp->next->next == NULL) {
            Node* nodeToDelete = temp->next;
            nodeToDelete->prev = NULL;
            nodeToDelete->next = NULL;
            temp->next = NULL;
            return head;
        }
        
        Node* nodeToDelete = temp->next;
        nodeToDelete->prev = NULL;
        nodeToDelete->next->prev = temp;
        temp->next = nodeToDelete->next;
        nodeToDelete->next = NULL;
        return head;
    }
};