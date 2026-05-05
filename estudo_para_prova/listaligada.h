#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

// ── Estrutura do nó ──────────────────────────────────────────────────────────
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// ── Estrutura da lista ───────────────────────────────────────────────────────
typedef struct {
    Node *head;
    int size;
} LinkedList;

// ── Protótipos ───────────────────────────────────────────────────────────────
void  list_init(LinkedList *list);
void  list_push_front(LinkedList *list, int value);
void  list_push_back(LinkedList *list, int value);
int   list_insert_at(LinkedList *list, int index, int value);
int   list_remove_front(LinkedList *list);
int   list_remove_back(LinkedList *list);
int   list_remove_at(LinkedList *list, int index);
int   list_get(const LinkedList *list, int index, int *out);
int   list_search(const LinkedList *list, int value);
void  list_print(const LinkedList *list);
void  list_free(LinkedList *list);

#endif // LINKED_LIST_H