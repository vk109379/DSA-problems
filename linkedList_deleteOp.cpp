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

void print(node *n){
    while(n != NULL){
        cout << n -> data << endl;
        n = n -> next;
    }
}

node *deleteHead(node*head){
    if(head == NULL){
        return NULL;
    }
    else{
        node *temp = head -> next;
        delete head;
        return temp;
    }
}

node *deleteLast(node *head){
    if(head == NULL)
        return NULL;
    if(head -> next == NULL){
        delete head;
        return NULL;
    }
    node *curr = head;
    while(curr -> next -> next!= NULL){
        curr = curr -> next;
    }
    delete (curr -> next);
    curr -> next = NULL;
    return head;
}

int main()
{
    node  *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(4);
    
    head -> next = second;
    second -> next = third;
    third -> next =  fourth;

    // Delete first node.
    head = deleteHead(head);
    
    //Delete last node.
    head = deleteLast(head);

    print(head);
    
    return 0;
}