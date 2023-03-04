
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
  char title[CONCEPT_LENGHT];
  char album[CONCEPT_LENGHT];
  char artist[CONCEPT_LENGHT];
};

typedef struct LinkedListNode LinkedListNode;

/**
 * Crear un nodo para la lista
 * @param titulo
 * @param album
 * @param artista
 * @return direccion al nodo
 */
LinkedListNode *linkedListNodeCreate(char *title, char *album, char *artist)
{
  LinkedListNode *foo = malloc(sizeof(LinkedListNode));

  if (foo == NULL)
  {
    printf("LinkedListNodeCreate: No se pudo reservar memoria!!\n");
    exit(EXIT_FAILURE);
  }

  foo->next = NULL;

  strcpy(foo->title, title);
  strcpy(foo->album, album);
  strcpy(foo->artist, artist);

  return foo;
}

/**
 * Copiar un nodo de la lista
 * @param node direccion al nodo
 * @return
 */
LinkedListNode *linkedListNodeCopy(LinkedListNode *node)
{
  return linkedListNodeCreate(node->title, node->album, node->artist);
}

/**
 * Crear un nodo para la lista
 * @param
 * @return
 */
void linkedListNodeInit(LinkedListNode *node, char *title, char *album, char *artist)
{
  node = malloc(sizeof(LinkedListNode));

  if (node == NULL)
  {
    printf("LinkedListNodeInit: No se pudo reservar memoria!!\n");
    exit(EXIT_FAILURE);
  }

  node->next = NULL;

  strcpy(node->title, title);
  strcpy(node->album, album);
  strcpy(node->artist, artist);
  
}

/**
 * Mostrar el arreglo en terminal
 * @param
 * @return
 */
void linkedListNodeDisplay(LinkedListNode *node)
{
  printf("%-33s %-33s %-33s", node->title, node->album, node->artist);
}

#endif
