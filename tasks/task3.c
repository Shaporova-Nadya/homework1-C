#include <stdio.h>
#include <stdlib>
#include "task3.h"

typedef struct Node{
    int value;
    struct Node* next;
}Node;

Node* createNode(int value)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL){
        exit(1)
    }
    newNode -> value = value;
    newNode -> next = NULL;
    return newNode;
}

void push(Node** head, int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode -> value = data;
    newNode -> next = (*head);
    (*head) = newNode;
}

int pop(Node** head)
{
    Node* prev = NULL;
    int val;
    if(head == NULL){
        exit(-1)
    }
    prev = (*head);
    val = prev -> value;
    (*head) = (*head) -> next;
    free(prev);
    return val;
}

void printList(Node* node)
{
    while(node != NULL){
        printf("%d ->", node -> data);
        node = node -> next;
    }
    printf("NULL\n")
}

Node* reverseList(Node* head)
{
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while (current != NULL) {
        next = current -> next; 
        current -> next = prev; 
        prev = current;       
        current = next;      
    }
    return prev;
}
