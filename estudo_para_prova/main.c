#include <stdio.h>
#include "listaligada.h"

int main(void) {
    LinkedList list;
    list_init(&list);

    printf("=== Lista Ligada em C ===\n\n");

    // ── Inserções ────────────────────────────────────────────────────────────
    printf("-- Inserindo no final: 10, 20, 30, 40 --\n");
    list_push_back(&list, 10);
    list_push_back(&list, 20);
    list_push_back(&list, 30);
    list_push_back(&list, 40);
    list_print(&list);

    printf("\n-- Inserindo 5 no início --\n");
    list_push_front(&list, 5);
    list_print(&list);

    printf("\n-- Inserindo 25 no índice 3 --\n");
    list_insert_at(&list, 3, 25);
    list_print(&list);

    // ── Busca ────────────────────────────────────────────────────────────────
    printf("\n-- Buscando valor 25 --\n");
    int idx = list_search(&list, 25);
    if (idx >= 0)
        printf("Valor 25 encontrado no índice %d.\n", idx);
    else
        printf("Valor 25 não encontrado.\n");

    printf("\n-- Buscando valor 99 --\n");
    idx = list_search(&list, 99);
    printf("Valor 99 %s.\n", idx >= 0 ? "encontrado" : "não encontrado");

    // ── Acesso por índice ─────────────────────────────────────────────────────
    printf("\n-- Acessando índice 2 --\n");
    int val;
    if (list_get(&list, 2, &val))
        printf("Índice 2 contém: %d\n", val);

    // ── Remoções ─────────────────────────────────────────────────────────────
    printf("\n-- Removendo do início --\n");
    printf("Removido: %d\n", list_remove_front(&list));
    list_print(&list);

    printf("\n-- Removendo do final --\n");
    printf("Removido: %d\n", list_remove_back(&list));
    list_print(&list);

    printf("\n-- Removendo índice 1 --\n");
    printf("Removido: %d\n", list_remove_at(&list, 1));
    list_print(&list);

    // ── Liberação ────────────────────────────────────────────────────────────
    printf("\n-- Liberando memória --\n");
    list_free(&list);
    list_print(&list);

    return 0;
}