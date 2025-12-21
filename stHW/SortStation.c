#include "SortStation.h"
#include "Stack.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getPrecedence(char op)
{
    if (op == '-' || op == '+') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

char peek(Stack* stack)
{
    if (isEmpty(stack)) {
        return '\0';
    }
    return stack->head->value;
}

char* InfixToPostfix(char* string)
{
    Stack stack = newStack();
    if (string == NULL)
        return NULL;

    char* strout = (char*)malloc(sizeof(char) * (strlen(string) * 2 + 1));
    if (strout == NULL) {
        return NULL;
    }

    int i = 0, j = 0;

    while (string[i] != '\0') {
        char currentChar = string[i];

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
                free(strout);
                while (!isEmpty(&stack))
                    pop(&stack);
                return NULL;
            }
        } else {
            while (!isEmpty(&stack) && peek(&stack) != '(' && getPrecedence(peek(&stack)) >= getPrecedence(currentChar)) {
                strout[j++] = pop(&stack);
            }
            push(&stack, currentChar);
        }
        i++;
    }

    while (!isEmpty(&stack)) {
        if (peek(&stack) == '(') {
            free(strout);
            while (!isEmpty(&stack))
                pop(&stack);
            return NULL;
        }
        strout[j++] = pop(&stack);
    }

    strout[j] = '\0';
    return strout;
}
