#include "lists.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isListMatching(Node* head, int* expectedValues, int expectedCount)
{
    Node* current = head;
    int count = 0;

    while (current != NULL && count < expectedCount) {
        if (current->value != expectedValues[count]) {
            return false;
        }
        current = current->next;
        count++;
    }

    return (current == NULL && count == expectedCount);
}

bool testCorrect()
{
    Node* head = NULL;

    addSorted(&head, 10);
    addSorted(&head, 5);
    addSorted(&head, 15);
    int expected1[] = { 5, 10, 15 };
    bool res1 = isListMatching(head, expected1, 3);

    deleteValue(&head, 10);
    int expected2[] = { 5, 15 };
    bool res2 = isListMatching(head, expected2, 2);

    deleteValue(&head, 5);
    int expected3[] = { 15 };
    bool res3 = isListMatching(head, expected3, 1);

    clearList(&head);

    return res1 && res2 && res3;
}

bool testIncorrect()
{
    Node* head = NULL;

    addSorted(&head, 50);
    deleteValue(&head, 999);
    int expected1[] = { 50 };
    bool res1 = isListMatching(head, expected1, 1);
    clearList(&head);

    deleteValue(&head, 10);
    int expected2[] = {};
    bool res2 = isListMatching(head, expected2, 0);

    addSorted(&head, 20);
    addSorted(&head, 1);
    int expected3[] = { 1, 20 };
    bool res3 = isListMatching(head, expected3, 2);

    clearList(&head);

    return res1 && res2 && res3;
}

int main(void)
{

    if (testCorrect() && testIncorrect()) {
        return 0;
    } else {
        printf("Тест не пройден \n");
        return 1;
    }
}
