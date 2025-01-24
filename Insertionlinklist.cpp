#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};

// void InsertAtBeginning(Node*& head,int value){
//     Node* newNode = new Node();
//     newNode ->data=value;
//     newNode ->next=head;
//     head=newNode;
// }

// void insertAtLast(Node*& head,int value){
//     Node* newNode = new Node();
//     newNode->data=value;
//     newNode ->next=nullptr;
//     if(head==nullptr){
//         head=newNode;
//     }else{
//         Node* temp=head;
//         while(temp->next != nullptr){
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

void InsertAtPosition(Node*& head,int value,int position){
    if(position<1){
        cout<<"Invalid Position"<<endl;
        return;
    }
    Node* newNode = new Node();
    newNode->data=value;
    if(position==1){
        newNode->next=head;
        head=newNode;
        return;
    }
    Node* temp= head;
    for(int i=1;i<position-1 && temp!=nullptr;++i){
        temp=temp->next;
    }
    if(temp == nullptr){
        cout<<"Position is out of range"<<endl;
    }
    else{
        newNode->next=temp->next;
        temp->next=newNode;
    }
}