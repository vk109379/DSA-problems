#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
Node *inserAtBegin(Node * head, int value){
    Node* begin = new Node(value);
    begin -> next = head;

    return begin;
}
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


void middle(Node *head){
    Node *i = head;
    Node *j = head;
    
    while(j != NULL && j -> next != NULL){
        i = i -> next;
        j = j -> next -> next;
    }
    cout << (i -> data);
}

int main() {
    Node  *head = new Node(1);

    head = inserAtBegin(head, 0);
    head = inserAtBegin(head, 5);
    head = inserAtBegin(head, 2);
    head = inserAtBegin(head, 8);
    head = inserAtBegin(head, 6);
    // head = inserAtBegin(head, 3);
    
    printList(head);
    middle(head);
}