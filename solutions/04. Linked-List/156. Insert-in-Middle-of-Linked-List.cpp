// ******** Given the head of a Singly Linked List and a value x. The task is to insert the key in the middle of the linked list. ********

// <======== Example ========>
// Input: LinkedList = 1->2->4 , x = 3
// Output: 1->2->3->4

// Input: LinkedList = 10->20->40->50 , x = 30
// Output: 10->20->30->40->50


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node *insertInMiddle(Node *head, int x) {
        Node* slowPtr = head;
        Node* fastPtr = head;
        Node* newNode = new Node(x);
        
        if(head == NULL) {
            return newNode;
        }
        
        while(fastPtr->next != NULL && fastPtr->next->next != NULL) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        
        newNode->next = slowPtr->next;
        slowPtr->next = newNode;
        return head;
    }
};