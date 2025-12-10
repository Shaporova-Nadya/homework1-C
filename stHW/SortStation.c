#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> 
#include "Stack.h"
#include "SortStation.h"

int getPrecedence(char op) { 
    if (op == '-' || op == '+') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    return 0; 
}

char peek(Stack* stack) {
    if (isEmpty(stack)) {
        fprintf(stderr, "Attempted to peek at an empty stack\n");
        exit(EXIT_FAILURE);
    }
    return stack->head->value;
}

char* InfixToPostfix(char* strin) {
    Stack stack = newStack(); 
    char* strout = (char*)malloc(sizeof(char) * (strlen(strin) * 2 + 1)); 
    if (strout == NULL) {
        fprintf(stderr, "Memory allocation failed for strout\n");
        exit(EXIT_FAILURE);
    }
    int i = 0; 
    int j = 0; 

    while (strin[i] != '\0') {
        char currentChar = strin[i];

        if (isspace(currentChar)) { 
            i++;
            continue;
        }

        if (isdigit(currentChar)) {
            strout[j++] = currentChar;
        } else if (currentChar == '(') {
            push(&stack, currentChar);
        } else if (currentChar == ')') {
            while (!isEmpty(&stack) && peek(&stack) != '(') {
                strout[j++] = pop(&stack);
            }
            if (!isEmpty(&stack) && peek(&stack) == '(') { 
                pop(&stack);
            } else {
                fprintf(stderr, "Mismatched parentheses\n");
                free(strout);
                exit(EXIT_FAILURE);
            }
        } else { 
            while (!isEmpty(&stack) && peek(&stack) != '(' && 
                   getPrecedence(peek(&stack)) >= getPrecedence(currentChar)) {
                strout[j++] = pop(&stack);
            }
            push(&stack, currentChar);
        }
        i++;
    }

    while (!isEmpty(&stack)) {
        if (peek(&stack) == '(') {
            fprintf(stderr, "Mismatched parentheses\n");
            free(strout);
            exit(EXIT_FAILURE);
        }
        strout[j++] = pop(&stack);
    }
    strout[j] = '\0'; 
    return strout;
}