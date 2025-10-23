#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"
#include "StackBrackets.h"

void freeStack(struct Stack* stack) 
{ 
    Node* current = stack->head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    stack->head = NULL;
}

int isMatching(char char1, char char2) 
{
    if (char1 == '(' && char2 == ')') return 1;
    if (char1 == '[' && char2 == ']') return 1;
    if (char1 == '{' && char2 == '}') return 1;
    return 0;
}

int isBalanced(char* str) 
{
    struct Stack stack = new(); 
    int i = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            push(&stack, str[i]); 
        } else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
            if (isEmpty(&stack)) { 
                freeStack(&stack); 
                return 0; 
            }
            char poppedChar = pop(&stack); 
            if (!isMatching(poppedChar, str[i])) {
                freeStack(&stack); 
                return 0; 
            }
        }
    }
    int result = isEmpty(&stack);
    freeStack(&stack); 
    return result; 
}
