
class Solution {
public:
    // Helper function to partition the array
    int partition(vector<int>& arr, int s, int e) {
        int pivot = arr[e]; // Use the last element as the pivot
        int i = s - 1; // Index of the smaller element

        for (int j = s; j < e; j++) {
            // If the current element is smaller than or equal to the pivot
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        // Place the pivot in its correct position
        swap(arr[i + 1], arr[e]);
        return i + 1;
    }

    // Helper function for quickSort
    void quickSortHelper(vector<int>& arr, int s, int e) {
        // Base case
        if (s >= e) {
            return;
        }

        // Partition the array
        int p = partition(arr, s, e);

        // Sort the left part
        quickSortHelper(arr, s, p - 1);

        // Sort the right part
        quickSortHelper(arr, p + 1, e);
    }

    // Public quickSort function
    vector<int> quickSort(vector<int>& nums) {
        quickSortHelper(nums, 0, nums.size() - 1);
        return nums;
    }
};

