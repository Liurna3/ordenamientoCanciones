
/**
 * AUTOR: Luis Eduardo Galindo Amaya                           FECHA: 26-02-2023
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

/* caracteres que puede contener concept */
#define CONCEPT_LENGHT 32

/* categorias de gastos */
#define CATEGORY_FOOD 0
#define CATEGORY_ENTERTAMENT 1
#define CATEGORY_FIXED_PAYMENT 2

struct LinkedListNode
{
  struct LinkedListNode *next;

  /* Propiedades */
  short category;
  char concept[CONCEPT_LENGHT];
  float cost;
};

typedef struct LinkedListNode LinkedListNode;

/**
 * Crear un nodo para la lista
 * @param categoria
 * @param concepto
 * @return direccion al nodo
 */
LinkedListNode *linkedListNodeCreate(short category, char *concept,
                                     float cost)
{
  LinkedListNode *foo = malloc(sizeof(LinkedListNode));

  if (foo == NULL)
  {
    printf("LinkedListNodeCreate: No se pudo reservar memoria!!\n");
    exit(EXIT_FAILURE);
  }

  foo->next = NULL;

  strcpy(foo->concept, concept);
  foo->category = category;
  foo->cost = cost;

  return foo;
}

/**
 * Copiar un nodo de la lista
 * @param node direccion al nodo
 * @return
 */
LinkedListNode *linkedListNodeCopy(LinkedListNode *node)
{
  return linkedListNodeCreate(node->category, node->concept, node->cost);
}

/**
 * Crear un nodo para la lista
 * @param
 * @return
 */
void linkedListNodeInit(LinkedListNode *node, short category, char *concept,
                        float cost)
{
  node = malloc(sizeof(LinkedListNode));

  if (node == NULL)
  {
    printf("LinkedListNodeInit: No se pudo reservar memoria!!\n");
    exit(EXIT_FAILURE);
  }

  node->next = NULL;

  strcpy(node->concept, concept);
  node->category = category;
  node->cost = cost;
}

/**
 * Mostrar el arreglo en terminal
 * @param
 * @return
 */
void linkedListNodeDisplay(LinkedListNode *node)
{
  switch (node->category)
  {
  case CATEGORY_FOOD:
    printf("Comida, ");
    break;

  case CATEGORY_ENTERTAMENT:
    printf("Diversion, ");
    break;

  case CATEGORY_FIXED_PAYMENT:
    printf("Pagos fijos, ");
    break;
  }

  printf("%s, %0.2f", node->concept, node->cost);
}

#endif
