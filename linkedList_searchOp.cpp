#include <bits/stdc++.h>
using namespace std;

class node{     //Making node using class
    public:
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};
void print(node *n){
    while(n != NULL){
        cout << n -> data << endl;
        n = n -> next;
    }
}

node *inserAtBegin(node * head, int value){
    node* begin = new node(value);
    begin -> next = head;

    return begin;
}

int searchLL(node *head, int key){
    node *curr = head;
    int pos = 0;
    while(curr != NULL){
        pos++;
        if(curr -> data == key){
            return pos;
        }
        curr = curr -> next;
    }
    return -1;
}

int main()
{
    node  *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    
    head -> next = second;
    second -> next = third;
    third -> next =  NULL;

    //inserting at the begining.
    head = inserAtBegin(head, 0);
    head = inserAtBegin(head, -1);
    head = inserAtBegin(head, -2);
    head = inserAtBegin(head, 8);
    head = inserAtBegin(head, 23);
    head = inserAtBegin(head, 9);
    head = inserAtBegin(head, 10);
    head = inserAtBegin(head, 69);
    
    // print(head);
    
    int present = searchLL(head, 7);
    if(present == -1){
        cout << "Not present";
    }
    else
        cout << "At position " << present << endl ;
    
    return 0;
}