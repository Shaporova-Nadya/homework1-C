#pragma once

//Creating structure
typedef struct StackNode{
    char value;
    struct StackNode* next;
}Node;

typedef struct Stack {
    struct StackNode* head;
}Stack;

//Function that creates stack
Stack new(void) 
    
//Function for checking the stack for emptiness
int isEmpty(Stack* stack) 

//Function for pushing elements to stack
void push(Stack* stack, char value) 

//This function pops elements from stack
char pop(Stack* stack) 
