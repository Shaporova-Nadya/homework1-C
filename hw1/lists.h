#pragma once

//Struct for list
typedef struct Node {
    int value;
    struct Node *next;
}Node;

//Function that creates list
Node *createNode(int val);

//Function that keeps list sorted
void addSorted(struct Node **head, int val);

//Function deletes value
void deleteValue(struct Node **head, int val);

//Function prints list
void printList(Node *head);
