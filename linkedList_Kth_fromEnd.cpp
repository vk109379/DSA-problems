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

// Function to find the data of kth node from the end of a linked list.
int getKthFromLast(Node *head, int k) {
    Node *curr = head;
    int n = 0;
    while(curr != NULL){
        n++; 
        curr  = curr -> next;
    }
    curr = head;
    
    if(k > n)
        return -1;
        
    for(n =  n - k; n != 0; n--){
        curr  = curr -> next;
    }
    
    return curr -> data;
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
    cout << getKthFromLast(head, 3);
}