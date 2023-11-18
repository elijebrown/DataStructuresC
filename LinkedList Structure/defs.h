#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef struct Node NodeType;
typedef struct List ListType;

struct Node {
    void* data;
    NodeType *next;
};

struct List {
    NodeType *head;
    NodeType *tail;
    int size;
};

void add(ListType *list, void* data, int i);
void addFirst(ListType *list, void* data);
void addLast(ListType *list, void* data);

void* remove(ListType *list, void* data);
void* removeFirst(ListType *list);
void* removeLast(ListType *list);
void* removeAt(ListType *list, int index);

int find(ListType *list, void* data);
void* get(ListType *list, int index);
void* getFirst(ListType *list);
void* getLast(ListType *list);

int size(ListType *list);

void initList(ListType *list);