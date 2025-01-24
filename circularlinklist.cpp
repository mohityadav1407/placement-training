// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;

// Node(int value): data(value), next(nullptr);
// }
// void traverse(Node* head){
//     if(head==nullptr){
//         cout<<"List is empty"
//     }
//     Node* temp=head;
//     while(temp!=head){
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }
// }

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int value) : data(value), next(nullptr) {}
};

// Function to traverse a circular linked list
void traverse(Node* head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

// Function to add a node to the end of a circular linked list
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        newNode->next = newNode; // Point to itself for a single-node list
        return newNode;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

int main() {
    Node* head = nullptr;

    // Adding nodes to the circular linked list
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);

    // Traversing the circular linked list
    cout << "Circular Linked List: ";
    traverse(head);

    return 0;
}
