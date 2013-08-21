#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

// using sharing of head pointer this time
void add_front(Node **head, int data);
int length(Node *head);
void display(Node *head);

int main(){
    Node *head = NULL;

    add_front(&head, 1);
    add_front(&head, 2);
    add_front(&head, 3);
    add_front(&head, 4);
    add_front(&head, 5);

    display(head);
    printf("Length is: %d\n", length(head));

    return 0;
}

void add_front(Node **head, int data){
    Node *new_node = (Node *)malloc(sizeof(Node));

    new_node->data = data;
    new_node->next = *head;

    *head = new_node;
}

int length(Node *head){
    int count=0;

    if(head == NULL){
        printf("List is empty!\n");

        return;
    }

    while(head!=NULL){
        count++;

        head = head->next;
    }

    return count;
}

void display(Node *head){
    if(head == NULL){
        printf("List is empty!\n");

        return;
    }

    while(head!=NULL){
        printf("%d ", head->data);

        head = head->next;
    }

    printf("\n");
}
