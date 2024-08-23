#include <bits/stdc++.h>
using namespace std;

//Implementation of Doubly Linked List and insert operations.


class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};
void print(node *n){
    cout << n -> data << " <-> ";
    while(n -> next -> next != NULL){
        n = n -> next;
        cout << n -> data << " <-> ";
    }
        cout << (n -> next) -> data << endl;
}

node *inserAtBegin(node * head, int value){
    node* begin = new node(value);
    begin -> next = head;
    head -> prev = begin;

    return begin;
}

void inserAtPosition(node *head, int pos, int data){
    node *temp = new node(data);
    node *curr = head;
    
    if(head == NULL){
        curr -> prev = temp;
        temp -> next = curr;
        return;
    }
    
    while(pos != 0){
        curr = curr -> next;
        pos--;
    }
    
    if(curr -> next == NULL){
        curr -> next = temp;
        temp -> prev = curr;
        return;
    }
    
    temp -> next = curr -> next;
    (curr -> next) -> prev = temp;
    temp -> prev = curr;
    curr -> next = temp;
}

int main()
{
    node  *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    
    head -> next = second;
    second -> next = third;
    second -> prev = head;
    third -> next =  NULL;
    third -> prev = second;

    //insertion at the begining.
    head = inserAtBegin(head, 0);
    head = inserAtBegin(head, -1);
    head = inserAtBegin(head, -2);
    
    //insertion at a position(after position).  0 based indexing
    inserAtPosition(head, 1, 4);
    inserAtPosition(head, 2, 24);
    inserAtPosition(head, 2, 8);

    print(head);
    
    return 0;
}