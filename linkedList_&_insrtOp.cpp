#include <bits/stdc++.h>
using namespace std;

// struct node{         //structure type node
//     int data;
//     node *next;
//     node(int n){
//         data = x;
//         next = NULL;
//     }
// }
class node{     //node using class
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

node *inserAtPosition(node *head, int pos, int x){
    node *temp = new node(x);
    if(pos ==1){
        temp -> next = head;
        return temp;
    }
    
    node *curr = head;
    for(int i = 1; i <= pos-2 && curr != NULL; i++){
        curr = curr -> next;
    }
    if(curr == NULL){
        return head;
    }
    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
}

node *insertAtEnd(node *head, int x){
    node *temp = new node(x);
    if(head == NULL){
        return temp;
    }
    node *curr = head;
    while(curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> next = temp;
    return head;
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

    //insertion at the begining.
    head = inserAtBegin(head, 0);
    head = inserAtBegin(head, -1);
    head = inserAtBegin(head, -2);
    
    //insertion at a position.
    head = inserAtPosition(head, 7, 4);
    head = inserAtPosition(head, 8, 5);
    head = inserAtPosition(head, 9, 6);
    
    //insertion at the end.
    head = insertAtEnd(head, 7);
    head = insertAtEnd(head, 8);
    head = insertAtEnd(head, 9);

    print(head);
    
    int present = searchLL(head, 7);
    if(present == -1){
        cout << "Not present";
    }
    else
        cout << "At position " << present << endl ;
    
    return 0;
}