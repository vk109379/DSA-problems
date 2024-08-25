#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};
void print(node *head){
    if(head == NULL) return;
    cout << head -> data << " ";
    for(node *n = head -> next; n != head; n = n -> next){
        cout << n -> data << " ";
    }
    cout << endl;
}

node *inserAtBegin(node * head, int value){
    node* begin = new node(value);
    if(head == NULL){
        begin -> next = begin;
    }
    else{
        begin -> next = head -> next;
        head -> next = begin;
        swap(head->data, begin->data);
    }
    return head;
}
node *insertAtEnd(node *head, int value){
    node *temp = new node(value);
    if(head == NULL){
        temp -> next = temp;
    }
    else{
        temp -> next = head -> next;
        head -> next = temp;
        swap(head->data, temp->data);
    }
    return temp;
}

int main()
{
    node *head = new node(1);
    head -> next = head;

    //insertion at the begining.
    head = inserAtBegin(head, 0);
    head = inserAtBegin(head, -1);
    head = inserAtBegin(head, 9);
    head = inserAtBegin(head, 7);
    head = inserAtBegin(head, 12);
    
    //insertion at ht end.
    head = insertAtEnd(head, 13);
    head = insertAtEnd(head, 14);
    head = insertAtEnd(head, 15);
    head = insertAtEnd(head, 16);

    print(head);

    return 0;
}