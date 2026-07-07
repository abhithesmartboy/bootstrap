#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *next;   
};

int main() {
    struct node *start = NULL;
    struct node *newnode;
    struct node *ptr;
    char item;
    int ch = 0;

    while (ch != 4) {
        printf("\n1 -> Insert\n");
        printf("2 -> Delete\n");
        printf("3 -> Traverse\n");
        printf("4 -> Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();

        switch (ch) {
            case 1:
                newnode = (struct node *)malloc(sizeof(struct node));
                if (newnode == NULL) {
                    printf("Memory allocation failed.\n");
                    break;
                }
                printf("Enter a Character: ");
                scanf("%c", &item);
                getchar(); 
                newnode->data = item;
                newnode->next = start;
                start = newnode;
                break;

            case 2:
                if (start == NULL) {
                    printf("There is no element to delete.\n");
                } else {
                    ptr = start;
                    start = start->next;
                    printf("Deleted Element: %c\n", ptr->data);
                    free(ptr);
                }
                break;

            case 3:
                if (start == NULL) {
                    printf("Linked List is empty.\n");
                } else {
                    printf("\nElements of Linked List:\n");
                    ptr = start;
                    while (ptr != NULL) {
                        printf("%c\n", ptr->data);
                        ptr = ptr->next;
                    }
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }
    }
}

