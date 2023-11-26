#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int data;
  void *next;
} Node;

void printMenu();
void printList(Node *root);
Node *push(Node *head, int data);
Node *pop(Node *root);
