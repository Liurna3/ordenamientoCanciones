
/**
 * AUTOR: Luis Eduardo Galindo Amaya                           FECHA: 05-03-2023
 *
 * DESCRIPCIÓN:
 * En este archivo se encuentrara todos los metodos para crear nodos para
 * linkedList.
 */

#ifndef linkedListNode
#define linkedListNode

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct LinkedListNode
{
  void* pointer;
  struct LinkedListNode *next;
};

typedef struct LinkedListNode LinkedListNode;


LinkedListNode *linkedListNodeCreate(void* pointer)
{
  LinkedListNode *foo = malloc(sizeof(LinkedListNode));

  if (foo == NULL)
  {
    printf("LinkedListNodeCreate: No se pudo reservar memoria!!\n");
    exit(EXIT_FAILURE);
  }

  foo->next = NULL;
  foo->pointer = pointer;
  return foo;
}

#endif
