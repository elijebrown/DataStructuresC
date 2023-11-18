#include "defs.h"

void initList(ListType *list) {
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

int initNode(NodeType **node, void *data) {
    *node = (NodeType *) malloc(sizeof(NodeType));
    if (*node == NULL) {
        return FALSE;
    }
    (*node)->data = data;
    (*node)->next = NULL;
    return TRUE;
}

void add(ListType *list, void *data, int i) {
    NodeType *node;
    if (initNode(&node, data) == FALSE) {return;}
    
    if(i>=list->size){
        addLast(list,data);
        return;
    }
    for(int j=0;j<i;j++){
        node=node->next;
    }
    node->next=node;
    list->size++;
}

void add(ListType *list, void *data) {
    addLast(list, data);
}

void addFirst(ListType *list, void *data) {
    NodeType *node;
    if (initNode(&node, data) == FALSE) {
        return;
    }
    if (list->head == NULL) {
        list->tail = node;
    } else {
        node->next = list->head;
    }
    list->head = node;
    list->size++;
}

void addLast(ListType *list, void *data) {
    NodeType *node;
    if (initNode(&node, data) == FALSE) {
        return;
    }
    if (list->head == NULL) {
        list->head = node;
    } else {
        list->tail->next = node;
    }
    list->tail = node;
    list->size++;
}
