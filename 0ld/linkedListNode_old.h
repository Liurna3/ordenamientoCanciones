#ifndef linkedListNode
#define linkedListNode

#include <stdlib.h>

struct LinkedListNode {
  struct LinkedListNode *next;
  int data;
};

typedef struct LinkedListNode LinkedListNode;

/**
 * Crear un nodo para la lista
 * @param value valor del nodo
 * @return direccion al nodo
 */
LinkedListNode *createLinkedListNode(int value) {
  LinkedListNode *foo = malloc(sizeof(LinkedListNode));

  if (foo == NULL) {
    printf("createLinkedListNode: No se pudo reservar memoria!!\n");
    exit(EXIT_FAILURE);
  }

  foo->data = value;
  foo->next = NULL;

  return foo;
}

#endif
