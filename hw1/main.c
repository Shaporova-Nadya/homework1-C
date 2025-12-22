#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

#define EXIT_STATE 0
#define ADD_STATE 1
#define DELETE_STATE 2
#define PRINT_STATE 3


int main(void) {
    Node *head = NULL;
    int choice, val;

    while (1) {
        printf("\nВыберите действие:\n");
        printf("%d – добавить значение\n",    ADD_STATE);
        printf("%d – удалить значение\n",    DELETE_STATE);
        printf("%d – распечатать список\n",  PRINT_STATE);
        printf("%d – выйти\n",               EXIT_STATE);
        printf("Ваш выбор: ");
        
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case ADD_STATE:
                printf("Введите значение для добавления: ");
                scanf("%d", &val);
                addSorted(&head, val);
                break;

            case DELETE_STATE:
                printf("Введите значение для удаления: ");
                scanf("%d", &val);
                deleteValue(&head, val);
                break;

            case PRINT_STATE:
                printList(head);
                break;

            case EXIT_STATE:
                while (head != NULL) {
                    Node *temp = head;
                    head = head->next;
                    free(temp);
                }
                printf("Выход из программы.\n");
                return 0; 

            default:
                printf("Неверный выбор.\n");
        }
    }

    return 0;
}