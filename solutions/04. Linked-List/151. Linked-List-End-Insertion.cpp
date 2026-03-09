// ******** You are given the head of a Singly Linked List and a value x, insert that value x at the end of the LinkedList and return the head of the modified Linked List. ********

// <======== Example ========>
// Input: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
// Output: 1 -> 2 -> 3 -> 4 -> 5 -> 6

// Input: 4 -> 5 -> NULL
// Output: 4 -> 5 -> 1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node *insertAtEnd(Node *head, int x) {
        Node* temp = head;
        Node* newNode = new Node(x);
        
        if(head == NULL) {
            return newNode;
        }
        
        while(temp->next != NULL) {
            temp = temp->next;
        }
        
        temp->next = newNode;
        return head;
    }
};