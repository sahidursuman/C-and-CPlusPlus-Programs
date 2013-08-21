#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

// we need double pointer to share the actual head pointer
// so that we can modify it to point to new node created in special case
// when list is empty
void add_end(Node **head, Node **tail, int data);
// we need single pointer bec there is no need of sharing, we just want to traverse
// starting from address of first node
void display(Node *head);

int main(){
    Node *head = NULL;
    Node *tail = NULL; // keep track of address of last node for

    add_end(&head, &tail, 1);
    add_end(&head, &tail, 2);
    add_end(&head, &tail, 3);
    add_end(&head, &tail, 4);
    add_end(&head, &tail, 5);

    display(head);

    return 0;
}

void add_end(Node **head, Node **tail, int data){
    Node *new_node = (Node *)malloc(sizeof(Node));

    new_node->data = data;
    new_node->next = NULL;

    if(*head == NULL){  // value stored at *head is NULL i.e. actual head points to nothing, no node present
        *head = new_node;
        *tail = new_node;
    } else{
        // add new node at the end
        (*tail)->next = new_node;
        *tail = new_node;
    }
}

void display(Node *head){
    // head is nothing but address of first node, so we can modify it
    if(head == NULL){
        printf("List is empty!");

        return;
    }

    printf("Printing linkedlist:\n");

    while(head!=NULL){
        printf("%d ", head->data);
        head = head->next;
    }

    printf("\n");
}
