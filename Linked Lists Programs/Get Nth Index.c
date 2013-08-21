#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

void add_end(Node **head, Node **tail, int data);
int get_nth(Node *head, int index);
void display(Node *head);

int main(){
    Node *head = NULL, *tail = NULL;

    add_end(&head, &tail, 1);
    add_end(&head, &tail, 2);
    add_end(&head, &tail, 3);
    add_end(&head, &tail, 4);
    add_end(&head, &tail, 5);

    display(head);

    printf("Item at index %d is %d\n", 1, get_nth(head, 1));

    return 0;
}

void add_end(Node **head, Node **tail, int data){
    Node *new_node = (Node *)malloc(sizeof(Node));

    new_node->data = data;
    new_node->next = NULL;

    if(*head == NULL){
        *head = *tail = new_node;
    } else {
        (*tail)->next = new_node;
        *tail = new_node;
    }
}

int get_nth(Node *head, int index){
    int count = 0;

    if(head == NULL){
        printf("List is empty!\n");

        return;
    }

    while(head!=NULL&&count<index){
        head = head->next;
        count++;
    }

    return (head->data);
}

void display(Node *head){
    if(head == NULL){
        printf("List is empty!\n");

        return;
    }

    printf("Printing list:\n");

    while(head!=NULL){
        printf("%d ", head->data);

        head = head->next;
    }

    printf("\n");
}
