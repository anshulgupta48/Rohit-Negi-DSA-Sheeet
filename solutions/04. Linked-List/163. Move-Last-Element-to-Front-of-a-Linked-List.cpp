// ******** You are given the head of a Linked List. You have to move the last element to the front of the Linked List and return the head the modified linked list. ********

// <======== Example ========>
// Input: Linked List: 2->5->6->2->1
// Output: 1->2->5->6->2

// Input: Linked List: 2
// Output: 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node *moveToFront(Node *head) {
        Node* temp = head;
        
        while(temp->next->next != NULL) {
            temp = temp->next;
        }
        
        Node* lastNode = temp->next;
        temp->next = NULL;
        lastNode->next = head;
        return lastNode;
    }
};