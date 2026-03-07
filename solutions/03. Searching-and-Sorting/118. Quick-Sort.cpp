// ******** Implement Quick Sort, a Divide and Conquer algorithm, to sort an array, arr[] in ascending order. Given an array arr[], with starting index low and ending index high, complete the functions partition() and quickSort(). Use the last element as the pivot, so that all elements less than or equal to the pivot come before it, and elements greater than the pivot follow it. ********
// Note --> low and high are inclusive.

// <======== Example ========>
// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]

// Input: arr[] = [2, 1, 6, 10, 4, 1, 3, 9, 7]
// Output: [1, 1, 2, 3, 4, 6, 7, 9, 10]

// Input: arr[] = [5, 5, 5, 5]
// Output: [5, 5, 5, 5]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    int getPartition(vector<int>& arr, int start, int end) {
        int pivotElement = arr[start];
        int pivotCount = 0;
        
        for(int i = start+1; i <= end; i++) {
            if(arr[i] <= pivotElement) {
                pivotCount++;
            }
        }
        
        int pivotIndex = start + pivotCount;
        swap(arr[start], arr[pivotIndex]);
        
        int i = start;
        int j = end;
        while(i < pivotIndex && j > pivotIndex) {
            while(arr[i] <= pivotElement) {
                i++;
            }
            
            while(arr[j] > pivotElement) {
                j--;
            }
            
            if(i < pivotIndex && j > pivotIndex) {
                swap(arr[i++], arr[j--]);
            }
        }
        
        return pivotIndex;
    }
    
    void quickSort(vector<int>& arr, int low, int high) {
        int start = low;
        int end = high;
        
        if(start >= end) {
            return;
        }
        
        int partition = getPartition(arr, start, end);
        quickSort(arr, start, partition-1);
        quickSort(arr, partition+1, end);
    }
};