#include <stdio.h>
#include <stdlib.h>
#include "count.h"


Node *createNode(int val) 
{
    Node *node = (Node *)malloc(sizeof(Node));
    node -> value = val;
    node -> next = NULL;
    return node;
}

int count(int n, int m)
{
    if(n <= 0 || m <= 0){
        return -1;
    }

    Node* head = createNode(1);
    Node* current = head;

    for(int i = 2; i <= n; i++) {
        current -> next = createNode(i);
        current = current -> next;
    }

    current -> next = head;

    current = head;
    Node* prev = current;
    int count = n;

    while(count > 1) {
        for (int i = 1; i < m; i++) {
            prev = current;
            current = current -> next;
        }

        printf("Убиваем воина: %d\n", current -> value);
        prev->next = current -> next;
        free(current);
        current = prev -> next;
        count--;

    }

    return current -> value;

}