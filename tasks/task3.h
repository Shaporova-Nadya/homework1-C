#pragma once

typedef struct Node{
    int value;
    struct Node* next;
}Node;

//creates new node
Node* createNode(int value);

//function for pushing elements
void push(Node** head, int data);

//To pop elements from list
int pop(Node** head);

//Function that prints list
void printList(Node* node);

//Function that reverses list
Node* reverseList(Node* head);