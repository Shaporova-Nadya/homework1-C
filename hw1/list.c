#include <stdio.h>
#include <stdlib.h>
#include "listtt.h"


Node *createNode(int val) {
    Node *node = (Node *)malloc(sizeof(Node));
    node -> value = val;
    node -> next = NULL;
    return node;
}

void addSorted(struct Node **head, int val) {
    Node *node = createNode(val);

    if (*head == NULL || val < (*head)-> value) {
        node -> next = *head;
        *head = node;
        return;
    }

    Node *current = *head;
    while (current -> next != NULL && current -> next ->value < val) {
        current = current -> next;
    }

    node -> next = current -> next;
    current -> next = node;
}

void deleteValue(struct Node **head, int val) {
    Node *temp = *head;
    Node *prev = NULL;

    if (temp == NULL) {
        printf("Список пуст.\n");
        return;
    }
    if (temp != NULL && temp -> value == val) {
        *head = temp -> next;
        free(temp);
        return;
    }

    while (temp != NULL && temp -> value != val) {
        prev = temp;
        temp = temp -> next;
    }

    if (temp == NULL) {
        printf("Значение не найдено в списке.\n");
        return;
    }

    prev -> next = temp -> next;
    free(temp);
}

void printList(Node *head) {
    Node *current = head;
    if (current == NULL) {
        printf("Список пуст.\n");
        return;
    }
    printf("Список: ");
    while (current != NULL) {
        printf("%d ", current -> value);
        current = current -> next;
    }
    printf("\n");
}
