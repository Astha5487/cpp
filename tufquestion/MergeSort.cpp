
class Solution {
public:
    // Helper function to merge two sorted subarrays
    void merge(vector<int>& arr, int s, int e) {
        int mid = s + (e - s) / 2;
        int len1 = mid - s + 1;
        int len2 = e - mid;

        // Create temporary arrays
        vector<int> first(len1);
        vector<int> second(len2);

        // Copy values to the first subarray
        int mainArrayIndex = s;
        for (int i = 0; i < len1; i++) {
            first[i] = arr[mainArrayIndex++];
        }

        // Copy values to the second subarray
        mainArrayIndex = mid + 1;
        for (int i = 0; i < len2; i++) {
            second[i] = arr[mainArrayIndex++];
        }

        // Merge the two sorted subarrays
        int index1 = 0;
        int index2 = 0;
        mainArrayIndex = s;

        while (index1 < len1 && index2 < len2) {
            if (first[index1] < second[index2]) {
                arr[mainArrayIndex++] = first[index1++];
            } else {
                arr[mainArrayIndex++] = second[index2++];
            }
        }

        // Copy any remaining elements from the first subarray
        while (index1 < len1) {
            arr[mainArrayIndex++] = first[index1++];
        }

        // Copy any remaining elements from the second subarray
        while (index2 < len2) {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Recursive mergeSort function
    void mergeSortHelper(vector<int>& arr, int s, int e) {
        // Base case: if the array has one or no elements, it is already sorted
        if (s >= e) {
            return;
        }

        int mid = s + (e - s) / 2;

        // Sort the left half
        mergeSortHelper(arr, s, mid);

        // Sort the right half
        mergeSortHelper(arr, mid + 1, e);

        // Merge the sorted halves
        merge(arr, s, e);
    }

    // Public mergeSort function
    vector<int> mergeSort(vector<int>& nums) {
        mergeSortHelper(nums, 0, nums.size() - 1);
        return nums;
    }
};

