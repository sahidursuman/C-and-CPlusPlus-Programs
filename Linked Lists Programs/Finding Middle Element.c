#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

void add_front(Node **head, int data);
void find_middle(Node *head);
void display(Node *head);

int main(){
    Node *head = NULL;

    add_front(&head, 1);
    add_front(&head, 2);
    add_front(&head, 3);
    add_front(&head, 4);
    add_front(&head, 5);

    display(head);

    find_middle(head);

    return 0;
}

void add_front(Node **head, int data){
    Node *new_node = (Node *)malloc(sizeof(Node));

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void find_middle(Node *head){
    Node *slow = head, *fast = head;

    if(head==NULL){
        printf("List empty!\n");

        return;
    }

    if(head->next == NULL){
        printf("Middle node: %d\n", head->data);

        return;
    }

    slow = head;
    fast = head->next;

    while(fast!=NULL){
        if(fast->next==NULL){
            printf("Middle node: %d\n", slow->data);

            return;
        } else if(fast->next->next == NULL){
            fast = fast->next;
        } else{
            fast = fast->next->next;
        }

        slow = slow->next;
    }

    printf("Middle node: %d\n", slow->data);
}

void display(Node *head){
    Node *ptr = head;

    if(ptr==NULL){
        printf("List empty!\n");

        return;
    }

    printf("Printing list:\n");

    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }

    printf("\n");
}
