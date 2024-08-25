#include <bits/stdc++.h>
using namespace std;

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

node *deleteHead(node * head){
    node* curr = head;
    curr = curr -> next;
    curr -> prev = NULL;
    delete head;

    return curr;
}

void deleteLast(node *head){
    if(head == NULL) return;
    if(head -> next == NULL){
        delete head;
        return;
    }
    node *curr = head;
    while(curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> prev -> next = NULL;
    delete curr;
}
int main()
{
    node *head = new node(1);
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
    head = inserAtBegin(head, 9);
    head = inserAtBegin(head, 7);
    head = inserAtBegin(head, 12);

    print(head);
    
    head = deleteHead(head);  //Deletion at begining
    deleteLast(head);        //Deletion at end.
    print(head);

    return 0;
}