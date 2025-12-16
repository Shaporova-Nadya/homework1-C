#pragma once

//Struct for list
typedef struct Node {
    int value;
    struct Node *next;
}Node;

//Function that creates list
Node *createNode(int val);

//Function that counts the position of alive varrior
int count(int n, int m);