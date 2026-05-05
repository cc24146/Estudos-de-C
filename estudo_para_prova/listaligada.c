#include "listaligada.h"

// ── Inicializa a lista ───────────────────────────────────────────────────────
void list_init(LinkedList *list) {
    list->head = NULL;
    list->size = 0;
}

// ── Helpers internos ─────────────────────────────────────────────────────────
static Node *new_node(int value) {
    Node *node = (Node *)malloc(sizeof(Node));
    if (!node) {
        fprintf(stderr, "Erro: sem memória.\n");
        exit(EXIT_FAILURE);
    }
    node->data = value;
    node->next = NULL;
    return node;
}

// ── Inserção no início ───────────────────────────────────────────────────────
void list_push_front(LinkedList *list, int value) {
    Node *node = new_node(value);
    node->next = list->head;
    list->head = node;
    list->size++;
}

// ── Inserção no final ────────────────────────────────────────────────────────
void list_push_back(LinkedList *list, int value) {
    Node *node = new_node(value);
    if (!list->head) {
        list->head = node;
    } else {
        Node *cur = list->head;
        while (cur->next) cur = cur->next;
        cur->next = node;
    }
    list->size++;
}

// ── Inserção em índice (0-based) ─────────────────────────────────────────────
// Retorna 1 em sucesso, 0 se o índice for inválido.
int list_insert_at(LinkedList *list, int index, int value) {
    if (index < 0 || index > list->size) return 0;
    if (index == 0) { list_push_front(list, value); return 1; }

    Node *cur = list->head;
    for (int i = 0; i < index - 1; i++) cur = cur->next;

    Node *node = new_node(value);
    node->next = cur->next;
    cur->next  = node;
    list->size++;
    return 1;
}

// ── Remoção do início ────────────────────────────────────────────────────────
// Retorna o valor removido, ou -1 se a lista estiver vazia.
int list_remove_front(LinkedList *list) {
    if (!list->head) return -1;
    Node *tmp = list->head;
    int val   = tmp->data;
    list->head = tmp->next;
    free(tmp);
    list->size--;
    return val;
}

// ── Remoção do final ─────────────────────────────────────────────────────────
int list_remove_back(LinkedList *list) {
    if (!list->head) return -1;
    if (!list->head->next) return list_remove_front(list);

    Node *cur = list->head;
    while (cur->next->next) cur = cur->next;
    int val = cur->next->data;
    free(cur->next);
    cur->next = NULL;
    list->size--;
    return val;
}

// ── Remoção em índice (0-based) ──────────────────────────────────────────────
int list_remove_at(LinkedList *list, int index) {
    if (!list->head || index < 0 || index >= list->size) return -1;
    if (index == 0) return list_remove_front(list);

    Node *cur = list->head;
    for (int i = 0; i < index - 1; i++) cur = cur->next;

    Node *tmp = cur->next;
    int val   = tmp->data;
    cur->next = tmp->next;
    free(tmp);
    list->size--;
    return val;
}

// ── Acesso por índice ────────────────────────────────────────────────────────
// Escreve o valor em *out. Retorna 1 em sucesso, 0 se inválido.
int list_get(const LinkedList *list, int index, int *out) {
    if (index < 0 || index >= list->size) return 0;
    Node *cur = list->head;
    for (int i = 0; i < index; i++) cur = cur->next;
    *out = cur->data;
    return 1;
}

// ── Busca linear ─────────────────────────────────────────────────────────────
// Retorna o índice do primeiro elemento igual a value, ou -1 se não encontrado.
int list_search(const LinkedList *list, int value) {
    Node *cur = list->head;
    int   idx = 0;
    while (cur) {
        if (cur->data == value) return idx;
        cur = cur->next;
        idx++;
    }
    return -1;
}

// ── Impressão ────────────────────────────────────────────────────────────────
void list_print(const LinkedList *list) {
    printf("Lista (%d nós): ", list->size);
    if (!list->head) { printf("[vazia]\n"); return; }
    Node *cur = list->head;
    while (cur) {
        printf("[%d]", cur->data);
        if (cur->next) printf(" -> ");
        cur = cur->next;
    }
    printf(" -> NULL\n");
}

// ── Liberação de memória ─────────────────────────────────────────────────────
void list_free(LinkedList *list) {
    Node *cur = list->head;
    while (cur) {
        Node *tmp = cur->next;
        free(cur);
        cur = tmp;
    }
    list->head = NULL;
    list->size = 0;
}