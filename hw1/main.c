#include <stdio.h>
#include <stdlib.h>
#include "listtt.h"

int main(void) {
    Node *head = NULL;
    int choice, val;

    printf("Программа для управления сортированным односвязным списком.\n");

    while (1) {
        printf("\nВыберите действие:\n");
        printf("1 – добавить значение\n");
        printf("2 – удалить значение\n");
        printf("3 – распечатать список\n");
        printf("0 – выйти\n");
        printf("Ваш выбор: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Введите значение для добавления: ");
                scanf("%d", &val);
                addSorted(&head, val);
                printf("Значение добавлено.\n");
                break;
            case 2:
                printf("Введите значение для удаления: ");
                scanf("%d", &val);
                deleteValue(&head, val);
                break;
            case 3:
                printList(head);
                break;
            case 0:
                // Очищаем память перед выходом
                while (head != NULL) {
                    Node *temp = head;
                    head = head -> next;
                    free(temp);
                }
                printf("Выход из программы.\n");
                exit(0);
            default:
                printf("Неверный выбор.\n");
        }
    }

    return 0;
}
