// ******** You are given the head of a linked list and the number k, You have to return the kth node from the end of linkedList. If k is more than the number of nodes, then the return -1. ********

// <======== Example ========>
// Input: LinkedList: 1->2->3->4->5->6->7->8->9, k = 2
// Output: 8

// Input: LinkedList: 10->5->100->5, k = 5
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int getKthFromLast(Node* head, int k) {
        Node* temp = head;
        int totalCount = 0;
        int count = 0;
        
        while(temp != NULL) {
            totalCount++;
            temp = temp->next;
        }
        
        temp = head;
        while(temp != NULL) {
            if(count == totalCount-k) {
                return temp->data;
            }
            
            count++;
            temp = temp->next;
        }
        
        return -1;
    }
};