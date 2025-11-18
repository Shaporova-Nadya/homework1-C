#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <stdbool.h>


Node *createNode(int val) {
    Node *node = (Node *)malloc(sizeof(Node));
    node -> value = val;
    node -> next = NULL;
    return node;
}

bool isListMatching(Node *head, int* expected_values, int expected_count) {
    Node *current = head;
    int count = 0;

    while (current != NULL && count < expected_count) {
        if (current->value != expected_values[count]) {
            return false; 
        }
        current = current->next;
        count++;
    }

    return (current == NULL && count == expected_count);
}

void clearList(Node **head) {
    while (*head != NULL) {
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void addSorted(struct Node **head, int val) 
{
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

void deleteValue(struct Node **head, int val) 
{
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

void printList(Node *head) 
{
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

bool testCorrect()
{
    Node *head = NULL;
    
    addSorted(&head, 10);
    addSorted(&head, 5);
    addSorted(&head, 15);
    int expected1[] = {5, 10, 15};
    bool res1 = isListMatching(head, expected1, 3);
    
    deleteValue(&head, 10);
    int expected2[] = {5, 15};
    bool res2 = isListMatching(head, expected2, 2);

    deleteValue(&head, 5);
    int expected3[] = {15};
    bool res3 = isListMatching(head, expected3, 1);
    
    clearList(&head);

    return res1 && res2 && res3;
}

bool testIncorrect()
{
    Node *head = NULL;

    addSorted(&head, 50);
    deleteValue(&head, 999); 
    int expected1[] = {50};
    bool res1 = isListMatching(head, expected1, 1); 
    clearList(&head);

    deleteValue(&head, 10); 
    int expected2[] = {};
    bool res2 = isListMatching(head, expected2, 0);

    addSorted(&head, 20); 
    addSorted(&head, 1); 
    int expected3[] = {1, 20};
    bool res3 = isListMatching(head, expected3, 2);

    clearList(&head);

    return res1 && res2 && res3;
}


int main(void)
{
    
    if(testCorrect() && testIncorrect()){ 
        return 0;
    } else {
        printf("Тест не пройден \n");
        return 1;
    }
}
