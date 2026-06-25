#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    int max = arr[0];

    // Find maximum element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int count[max + 1] = {0};

    // Count frequency
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            cout << i << " ";
            count[i]--;
        }
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};   // Example
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    countingSort(arr, n);

    return 0;
}