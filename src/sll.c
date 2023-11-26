#include "sll.h"

void printMenu() {
  printf("Options:\n");
  printf("1. Print Options\n");
  printf("2. Print List\n");
  printf("3. Add Node to End\n");
  printf("4. Pop Last Node\n");
  printf("5. Quit\n");
}

void printList(Node *root) {
  if (root == NULL) {
    printf("No Nodes!\n");
  } else {
    printList(root->next);
  }
}

Node *push(Node *head, int data) {
  Node *new = malloc(sizeof(Node));

  if (head == NULL) {
    new->data = data;
    new->next = NULL;
    head = new;
  } else {
    new->data = data;
    new->next = head;
    head = new;
  }

  return new;
  free(new);
}

Node *pop(Node *root) {
  Node *previous = malloc(sizeof(Node));

  while (root->next != NULL) {
    previous = root;

    if (root->next == NULL) {
      previous->next = NULL;
      free(previous);
      break;
    }

    root = root->next;
  }

  return root;
}
