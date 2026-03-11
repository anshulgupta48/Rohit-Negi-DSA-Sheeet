// ******** Given a linked list sorted in ascending order and an integer called key, insert data in the linked list such that the list remains sorted. ********

// <======== Example ========>
// Input: LinkedList: 25->36->47->58->69->80, key: 19
// Output: 19->25->36->47->58->69->80

// Input: LinkedList: 50->100, key: 75
// Output: 50->75->100


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* sortedInsert(Node* head, int key) {
        Node* temp = head;
        Node* newNode = new Node(key);
        
        if(temp == NULL) {
            return newNode;
        }
        
        if(temp->data > newNode->data) {
            newNode->next = temp;
            return newNode;
        }
        
        while(temp->next != NULL) {
            if(temp->next->data > key) {
                newNode->next = temp->next;
                temp->next = newNode;
                return head;
            }
            temp = temp->next;
        }
        
        temp->next = newNode;
        return head;
    }
};