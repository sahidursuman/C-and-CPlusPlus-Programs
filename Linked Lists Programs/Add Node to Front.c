/*
*
* Program to add nodes at the beginning of the linked list
**/

#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node * add_front(Node *head, int data);
void display(Node *head);

int main(){
    Node *head = NULL;

    // everytime head points to new node, and thus inserted at beginning
    head = add_front(head, 1);
    head = add_front(head, 2);
    head = add_front(head, 3);
    head = add_front(head, 4);
    head = add_front(head, 5);

    display(head);

    return 0;
}

Node * add_front(Node *head, int data){
    // here head is not the actual head pointer, it is address of first node
    // if used Node **head, then we are sharing actual head pointer which is *head,
    // in that case changing *head means changing node to which head pointer points

    // create a new node
    Node *new_node = (Node *)malloc(sizeof(Node));

    // add data to new node
    new_node->data = data;
    // new node points to first node or NULL
    new_node->next = head;

    // return address of first node to head pointer
    return new_node;
}

void display(Node *head){
    // here head is not the actual head pointer, it is address of first node
    if(head==NULL){
        printf("Linked List is empty");

        return;
    }

    printf("Printing linked list:\n");

    while(head!=NULL){
       printf("%d ", head->data);
       head = head->next;
    }

    printf("\n");
}
