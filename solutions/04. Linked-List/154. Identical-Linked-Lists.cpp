// ******** Given the heads of two singly linked lists, head1 and head2, the task is to determine whether the two linked lists are identical. Two linked lists are considered identical if they have the same number of nodes and each corresponding node contains the same data in the same order. Return true if both lists are identical; otherwise, return false. ********

// <======== Example ========>
// Input: head1: 1->2->3->4->5->6, head2: 99->59->42->20
// Output: false

// Input: head1: 1->2->3->4->5, head2: 1->2->3->4->5
// Output: true


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool areIdentical(Node *head1, Node *head2) {
        Node* curr1 = head1;
        Node* curr2 = head2;
        
        while(curr1 != NULL && curr2 != NULL) {
            if(curr1->data != curr2->data) {
                return false;
            }
            
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        
        if(curr1 == NULL && curr2 == NULL) {
            return true;
        }
        return false;
    }
};