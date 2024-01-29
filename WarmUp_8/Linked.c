#include <stdio.h>
#include <stdlib.h>

//initializing node structure instead of class 
struct Node {
    int data;
    struct Node* next;
};

//creating newNode function
//using sizeof instead of strlen for node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

//initializiaing LinkedList structure
struct LinkedList {
    struct Node* head;
};

//function to push element at the head
void push(struct LinkedList* list, int new_data) {
    struct Node* new_node = newNode(new_data);
    new_node->next = list->head;
    list->head = new_node;
}

//function to delete a node with a key
void deleteNode(struct LinkedList* list, int key) {
    struct Node* temp = list->head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        list->head = temp->next;
        free(temp);
        return;
    }

    //search for the key that needs to be deleted while keeping track of the previous node as well
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    //if the key was not present in the list delete node from list
    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

//print the linked list
void printList(struct LinkedList* list) {
    struct Node* tnode = list->head;
    while (tnode != NULL) {
        printf("%d ", tnode->data);
        tnode = tnode->next;
    }
    printf("\n");
}

int main() {
    //make an empty linked list
    struct LinkedList llist;
    llist.head = NULL;

    //push elements onto the linked list
    push(&llist, 7);
    push(&llist, 1);
    push(&llist, 3);
    push(&llist, 2);

    printf("Created Linked list is: ");
    printList(&llist);

    //delete a node with key 1
    deleteNode(&llist, 1);

    printf("Linked List after Deletion of 1: ");
    printList(&llist);

    return 0;
}