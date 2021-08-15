#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

node_t *list_create(void *data){
    node_t *head = malloc(sizeof(node_t));
    head->data = data;
    head->next = NULL;
    return head;
}

void list_destroy(node_t **head, void (*fp)(void *data)){
    node_t *current = *head;
    node_t *next;
    while(current != NULL){
        fp(current->data);
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

void list_push(node_t *head, void *data){
    node_t *current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = malloc(sizeof(node_t));
    current->next->data = data;
    current->next->next = NULL;
}

void list_unshift(node_t **head, void *data){
    node_t *new_node = malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void *list_pop(node_t **head){
}
