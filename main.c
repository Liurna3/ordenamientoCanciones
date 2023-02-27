
/**
 * AUTORES:                                                    FECHA: 26-02-2023
 * -  Luis Eduardo Galindo Amaya
 *
 * DESCRIPCIÓN:
 * M2.1 Ejercicio de ordenamiento básico. Escribe un programa que capture los
 * gastos de una persona y que calcule cuánto ha gastado en total.
 */

#include "linkedList.h"
#include "linkedListNode.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Longitud de la lista
 * @param direccion a la lista
 * @return numero de nodos
 */
int len(LinkedList *list);

/**
 * Obtener el valor de un nodo de la lista
 * @param direccion a la lista
 * @param posicion del elemento
 * @return puntero al nodo
 */
LinkedListNode *get(LinkedList *list, int position);

/**
 * Crear una nueva entrada para la lista, paras mas informacion consultar
 * linkedListNode.h
 * @param list direccion a la lista
 * @param category CATEGORY_FOOD, CATEGORY_ENTERTAMENT, CATEGORY_FIXED_PAYMENT
 * @param cost valor en dinero
 */
void append(LinkedList *list, short category, char *concept, float cost);

/**
 * Insertar un nodo en una posicion de la lista
 * @param list direccion a la lista
 * @param node direccion al nodo
 * @param posicion en la lista
 */
void insert(LinkedList *list, LinkedListNode *node, int position);

/**
 * Eliminar un nodo de la lista
 * @param list direccion a la lista
 * @param posicion en la lista
 */
void delete (LinkedList *list, int position);

/**
 * Obtener la categoria de un nodo
 * @param direccion al nodo
 * @return categoria
 */
short category(LinkedListNode *node);

/**
 * Obtener el Concepto del nodo
 * @param direccion al nodo
 * @return consepto
 */
char *concept(LinkedListNode *node);

/**
 * Obtener el Costo del nodo
 * @param direccion al nodo
 * @return costo
 */
float cost(LinkedListNode *node);

/**
 * Mostrar todos los valores del nodo
 * @param direccion al nodo
 */
void display(LinkedListNode *node);

int main(void) {
  LinkedList lista;
  linkedListInit(&lista);

  /* agregar elementos */
  append(&lista, CATEGORY_ENTERTAMENT, "Boleto para Morbius", 100.50);
  append(&lista, CATEGORY_FOOD, "Palomitas", 20.0);

  /* mostrar los elementos */
  printf("--- Elementos 1 ---\n");
  for (int i = 0; i < len(&lista); i++) {
    display(get(&lista, i));
    printf("\n");
  }

  printf("\n");

  /* copiar un elemento y ponerlo al final */
  LinkedListNode *boleto = get(&lista, 0);

  /* eliminar el boleto para morius de la lista */
  delete (&lista, 0);

  printf("--- Elementos 2 ---\n");
  for (int i = 0; i < len(&lista); i++) {
    display(get(&lista, i));
    printf("\n");
  }

  printf("\n");

  /* agregar un retiro */
  append(&lista, CATEGORY_FIXED_PAYMENT, "Retiro", 10000);

  printf("--- Elementos 3 ---\n");
  for (int i = 0; i < len(&lista); i++) {
    display(get(&lista, i));
    printf("\n");
  }
  printf("\n");

  /* insertar el boleto a la mitad */
  insert(&lista, boleto, 1);
  printf("--- Elementos 4 ---\n");
  for (int i = 0; i < len(&lista); i++) {
    display(get(&lista, i));
    printf("\n");
  }
  printf("\n");

  /* crear un nodo random e insertarlo */
  LinkedListNode *bar =
      linkedListNodeCreate(CATEGORY_FIXED_PAYMENT, "Otro retiro", 100);
  insert(&lista, bar, len(&lista)); /* insertar al final */

  printf("--- Elementos 5 ---\n");
  for (int i = 0; i < len(&lista); i++) {
    display(get(&lista, i));
    printf("\n");
  }
  printf("\n");

  /* liberar la memoria */
  linkedListFree(&lista);

  return 0;
}

/* FUNCIONES */

int len(LinkedList *list) { return linkedListLenght(list); }

void append(LinkedList *list, short category, char *concept, float cost) {
  linkedListInsertLast(list, linkedListNodeCreate(category, concept, cost));
}

void insert(LinkedList *list, LinkedListNode *node, int position) {
  linkedListInsert(list, node, position);
}

void delete (LinkedList *list, int position) {
  linkedListRemove(list, position);
}

LinkedListNode *get(LinkedList *list, int position) {
  return linkedListNodeCopy(linkedListGet(list, position));
}

short category(LinkedListNode *node) { return node->category; }
char *concept(LinkedListNode *node) { return node->concept; }
float cost(LinkedListNode *node) { return node->cost; }
void display(LinkedListNode *node) { linkedListNodeDisplay(node); }
