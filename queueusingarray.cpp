#include<iostream>
using namespace std;

int q[5], front = 0, rear = -1;

void insert(int x) {
    rear++;
    q[rear] = x;
}

void del() {
    front++;
}

int main() {
    insert(5);
    insert(10);
    del();

    for(int i=front; i<=rear; i++)
        cout << q[i] << " ";

    return 0;
}