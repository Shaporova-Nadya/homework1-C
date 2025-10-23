#pragma once

//Function to free up memory
void freeStack(struct Stack* stack);

//Function to find out are brackets paired
int isMatching(char char1, char char2);

//This function finds out are brackets balanced
int isBalanced(char* str);
