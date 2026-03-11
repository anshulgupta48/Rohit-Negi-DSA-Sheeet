// ******** Given head of a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list. ********

// <======== Example ========>
// Input: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
// Output: 5

// Input: 2 -> 4 -> 6 -> 7 -> 5 -> 1 -> 0 -> NULL
// Output: 7


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int getCount(Node* head) {
        int count = 0;
        Node* temp = head;
        
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }
        
        return count;
    }
};