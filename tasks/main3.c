#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

int main() {
    Node* head = NULL; 

    
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);

    printf("Исходный список: ");
    printList(head); 

    head = reverseList(head);

    printf("Перевернутый список: ");
    printList(head); 

    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

void TestManyNum()
{
    Node* head = NULL;

    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    pop(&head);
    push(&head, 500);
    push(&head, 60);
    push(&77);
    pop(&head);
    
    head = reverseList(head);

    printf("Итоговый список:");
    printList(head);

    Node* t;
    while(head != NULL){
        t = head;
        head = head -> next;
        free(t);
    }
    return 0;
}

