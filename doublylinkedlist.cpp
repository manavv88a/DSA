#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

// Insert at beginning
void insertBeg(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

// Insert at end
void insertEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Delete from beginning
void deleteBeg() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    delete temp;
}

// Display list
void display() {
    Node* temp = head;

    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    insertBeg(10);
    insertBeg(20);
    insertEnd(30);
    insertEnd(40);

    cout << "Doubly Linked List: ";
    display();

    deleteBeg();

    cout << "After deleting from beginning: ";
    display();

    return 0;
}