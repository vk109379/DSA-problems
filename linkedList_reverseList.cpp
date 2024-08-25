#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Function to reverse a linked list.
struct Node* reverseList(struct Node* head) {
    Node *prev = NULL;
    Node *curr = head;
    
    while(curr != NULL){
        Node *nxt = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nxt;
    }
    
    return prev;
}

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

int main() {
    Node  *head = new Node(1);

    head = inserAtBegin(head, 0);
    head = inserAtBegin(head, 5);
    head = inserAtBegin(head, 2);
    head = inserAtBegin(head, 8);
    head = inserAtBegin(head, 6);
    head = inserAtBegin(head, 3);
    
    printList(head);
    head = reverseList(head);
    printList(head);
}