// ******** Given a single linked list, calculate the sum of the last n nodes. ********
// Note --> It is guaranteed that n <= number of nodes.

// <======== Example ========>
// Input: Linked List: 5->9->6->3->4->10, n = 3
// Output: 17

// Input: Linked List: 1->2, n = 2
// Output: 3


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int sumOfLastN_Nodes(struct Node* head, int n) {
        Node* temp = head;
        int sum = 0;
        int totalCount = 0;
        int count = 0;
        
        while(temp != NULL) {
            totalCount++;
            temp = temp->next;
        }
        
        temp = head;
        while(temp != NULL) {
            if(count >= totalCount-n) {
                sum += temp->data;
            }
            
            count++;
            temp = temp->next;
        }
        
        return sum;
    }
};