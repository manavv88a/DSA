#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key, found = -1;

    cout << "Enter the number to search: ";
    cin >> key;

    // Linear Search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        cout << "Element found at index: " << found;
    else
        cout << "Element not found";

    return 0;
}