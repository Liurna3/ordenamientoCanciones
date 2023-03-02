
/**
 * AUTOR: Jorge Omar Torres Sosa                               FECHA: 26-02-2023
 * 
 * DESCRIPCIÓN:
 * En este archivo se encuentran los algoritmos para ordenar las listas.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(LinkedList *lista)
{
  // tamaño de la lista 
  int lista_len = len(lista);

  for (int i = 0; i < lista_len; i++)
  {
    for (int j = 0; j < lista_len - i - 1; j++)
    {
      char *a = concept(get(lista, j));
      char *b = concept(get(lista, j + 1));

      if (0 < strcmp(a, b))
      {
        LinkedListNode *temp1 = get(lista, j);
        delete(lista, j);
        insert(lista, temp1, j + 1);
      }
    }
  }
}

void insertionSort(LinkedList *lista)
{
  for (int i = 1; i < len(lista); i++)
  {
    LinkedListNode *key = get(lista, i);
    int j = i - 1;
    while (j >= 0 && strcmp(get(lista, j)->concept, key->concept) > 0)
    {
      // LinkedListNode *temp2 = get(lista, j);
      j--;
    }
    delete(lista, i);
    insert(lista, key, j + 1);
  }
}

void selectionSort(LinkedList *lista)
{
  for (int i = 0; i < len(lista) - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < len(lista); j++)
    {
      if (strcmp(get(lista, min)->concept, get(lista, j)->concept) < 0)
      {
        min = j;
      }
    }
    LinkedListNode *temp3 = get(lista, min);
    delete(lista, min);
    insert(lista, temp3, i);
  }
}