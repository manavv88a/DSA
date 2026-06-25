#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int n) {
    vector<float> bucket[n];

    // Put elements into buckets
    for (int i = 0; i < n; i++) {
        int index = n * arr[i];   // bucket index
        bucket[index].push_back(arr[i]);
    }

    // Sort each bucket
    for (int i = 0; i < n; i++) {
        sort(bucket[i].begin(), bucket[i].end());
    }

    // Merge all buckets
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < bucket[i].size(); j++) {
            arr[k++] = bucket[i][j];
        }
    }
}

int main() {
    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.51}; // Example
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}