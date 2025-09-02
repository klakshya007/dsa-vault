#include <iostream>
using namespace std;

// Swap function
void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int Partition(int a[], int low, int high) {
    int pivot = a[low]; // Choosing first element as pivot
    int i = low + 1;
    int j = high;

    while (true) {
        // Move i to the right until an element > pivot is found
        while (i <= high && a[i] <= pivot) {
            i++;
        }

        // Move j to the left until an element <= pivot is found
        while (j >= low && a[j] > pivot) {
            j--;
        }

        // If indices cross, break
        if (i >= j) break;

        // Swap out-of-place elements
        Swap(&a[i], &a[j]);
    }

    // Place pivot in its correct position
    Swap(&a[low], &a[j]);

    return j; // Pivot index
}

// QuickSort function
void QuickSort(int a[], int low, int high) {
    if (low < high) {
        int pivot_index = Partition(a, low, high);
        QuickSort(a, low, pivot_index - 1);  // Left subarray
        QuickSort(a, pivot_index + 1, high); // Right subarray
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    QuickSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
