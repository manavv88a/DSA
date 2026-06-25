#include <iostream>
using namespace std;

int main() {
    int hashTable[10];

    
    for (int i = 0; i < 10; i++) {
        hashTable[i] = -1;
    }

 
    int arr[] = {15, 25, 35, 45};

    
    for (int i = 0; i < 4; i++) {
        int index = arr[i] % 10;
        hashTable[index] = arr[i];
    }

    
    cout << "Hash Table:\n";
    for (int i = 0; i < 10; i++) {
        cout << i << " --> " << hashTable[i] << endl;
    }

    return 0;
}