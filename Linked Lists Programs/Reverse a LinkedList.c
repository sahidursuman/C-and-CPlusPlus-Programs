#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

void add_front(Node **head, int data);
void reverse_ll(Node **head);
void display(Node *head);

int main(){
    Node *head = NULL;

    add_front(&head, 1);
    add_front(&head, 2);
    add_front(&head, 3);
    add_front(&head, 4);
    add_front(&head, 5);

    printf("Before reverse:\n");
    display(head);
    printf("\nAfter reverse:\n");
    reverse_ll(&head);
    display(head);

    return 0;
}

void add_front(Node **head, int data){
    Node *new_node = (Node *)malloc(sizeof(Node));

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void reverse_ll(Node **head){
    Node *prev=NULL, *ptr=*head, *next=NULL;

    while(ptr!=NULL){
        next = ptr->next;
        ptr->next = prev;
        prev = ptr;

        ptr=next;
    }

    *head = prev;
}

void display(Node *head){
    Node *ptr = head;

    if(ptr == NULL){
        printf("List is empty!\n");

        return;
    }

    printf("Printing list:\n");

    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    printf("\n");
}
