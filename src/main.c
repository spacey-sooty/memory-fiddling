#include "sll.h"

int main(int argc, char *argv[]) {
    Node *root = NULL;
    int option;
    int value;

    printMenu();
    scanf("%d", &option);

    while (option != 5) {
        switch(option) {
            case 1:
                printMenu();
                break;
            case 2:
                printList(root);
                break;
            case 3:
                scanf("What value would you like to add? %d", &value);
                push(root, value);
                break;
            case 4:
                pop(root);
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
