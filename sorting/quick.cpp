#include <iostream>
using namespace std;

int partitionArray(int arr[], int s, int e) {
    int pivot = arr[s];
    int cnt = 0;

    // Count elements smaller than or equal to pivot
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            cnt++;
        }
    }

    // Place pivot in its correct position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // Arrange elements around the pivot
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }

    // Partition the array
    int p = partitionArray(arr, s, e);

    // Sort the left part
    quickSort(arr, s, p - 1);

    // Sort the right part
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;
    quickSort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
