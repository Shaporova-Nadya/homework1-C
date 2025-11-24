#include <stdio.h>
#include "stack.h"

typedef struct StackNode{
    char value;
    struct StackNode* next;
}Node;

typedef struct Stack {
    struct StackNode* head;
}Stack;

//Function that creates stack
Stack new(void) { 
    Stack stack = { 
        .head = NULL 
    };
    return stack;
}

//Function for checking the stack for emptiness
int isEmpty(Stack* stack) { 
    return stack->head == NULL;
}

//Function for pushing elements to stack
void push(Stack* stack, char value) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) { 
        fprintf(stderr, "Memory allocation failed in push\n");
        exit(EXIT_FAILURE);
    }
    node->value = value;
    node->next = stack->head;
    stack->head = node;
}

//This function pops elements from stack
char pop(Stack* stack) {
    if (isEmpty(stack)) {
        fprintf(stderr, "Attempted to pop from an empty stack\n");
        exit(EXIT_FAILURE); 
    }
    Node* oldNode = stack->head;
    char res = oldNode->value;
    stack->head = oldNode->next;
    free(oldNode);
    return res;
}
