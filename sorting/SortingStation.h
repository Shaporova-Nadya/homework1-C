#pragma once

//Function that determines the operator's priority
int getPrecedence(char op);

//Function to get element from stack without deleting it 
char peek(Stack* stack);

//Function that changes string from infix to postfix 
char* InfixToPostfix(char* strin);
