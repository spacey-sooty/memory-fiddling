#include "sll.h"

int main(int argc, char *argv[]) {
    Node *root = NULL;
    int option;
    int value;

    printMenu();

    while (option != 5) {
        scanf("%d", &option);
        switch(option) {
            case 1:
                printMenu();
                break;
            case 2:
                printList(root);
                printMenu();
                break;
            case 3:
                scanf("What value would you like to add? %d", &value);
                push(root, value);
                printMenu();
                break;
            case 4:
                pop(root);
                printMenu();
                break;
            case 5:
                break;
            default:
                printf("Invalid Option!\n");
                printMenu();
                break;
        }
    }

    return 0;
}
