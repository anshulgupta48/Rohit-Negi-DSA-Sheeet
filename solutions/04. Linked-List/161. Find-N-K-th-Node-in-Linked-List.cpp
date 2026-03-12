// ******** Given a singly linked list and a number k. Find the (n/k)th element, where n is the number of elements in the linked list. We need to consider ceil value in case of decimals. ********

// <======== Example ========>
// Input: LinkedList: 1->2->3->4->5->6 , k = 2
// Output: 3

// Input: 2->7->9->3->5 , k = 3
// Output: 7


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int fractional_node(struct Node *head, int k) {
        Node* temp = head;
        int totalCount = 0;
        int count = 0;
        
        while(temp != NULL) {
            totalCount++;
            temp = temp->next;
        }
        
        temp = head;
        int diff = (totalCount%k == 0) ? (totalCount/k) : (totalCount/k + 1);
        
        while(temp != NULL) {
            if(count == diff-1) {
                return temp->data;
            }
            
            count++;
            temp = temp->next;
        }
        
        return -1;
    }
};